/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FASTRPC is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this distribution.
 *
 *************************************************************************/

#include "fastrpc/transports/dds/UDPProxyTransport.h"
#include "fastrpc/utils/macros/snprintf.h"
#include "fastrpc/utils/dds/Middleware.h"

#if defined(OPENDDS)
#include "dds/DCPS/transport/framework/TransportRegistry.h"
#include "dds/DCPS/transport/framework/TransportInst_rch.h"
#include "dds/DCPS/transport/rtps_udp/RtpsUdpInst.h"
#include "dds/DCPS/DomainParticipantImpl.h"
#endif

static const char* const CLASS_NAME = "eprosima::rpc::transport::dds::UDPProxyTransport";

using namespace eprosima::rpc::transport::dds;

UDPProxyTransport::UDPProxyTransport(const char* const &remoteServiceName, const char* const &instanceName, int domainId, long milliseconds) :
    ProxyTransport(remoteServiceName, instanceName, domainId, milliseconds), m_to_connect(NULL)
{
}

UDPProxyTransport::UDPProxyTransport(const char* const &to_connect, const char* const &remoteServiceName, const char* const &instanceName, int domainId, long milliseconds) :
    ProxyTransport(remoteServiceName, instanceName, domainId, milliseconds), m_to_connect(NULL)
{
    m_to_connect = strdup(to_connect);
}

UDPProxyTransport::~UDPProxyTransport()
{
    if(m_to_connect != NULL)
        free(m_to_connect);
}

int UDPProxyTransport::setTransport(DDS::DomainParticipantQos &participantQos, DDS::DomainParticipant *participant)
{
#if defined(RTI_WIN32) || defined(RTI_LINUX)
    if(m_to_connect != NULL)
    {
        char buffer[100];
        const char *pointer;

        SNPRINTF(buffer, 100, "builtin.udpv4://%s", m_to_connect);
        participantQos.discovery.accept_unknown_peers = DDS_BOOLEAN_FALSE;
        participantQos.discovery.initial_peers.ensure_length(1, 1);
        pointer = strdup(buffer);
        participantQos.discovery.initial_peers.set_at(0, pointer);
    }

    return 0;
#elif defined(OPENDDS)
    const char* const METHOD_NAME = "setTransport";
    int returnedValue = -1;
    char cfgbuffer[50], trabuffer[50];
    OpenDDS::DCPS::RepoId pid = dynamic_cast<OpenDDS::DCPS::DomainParticipantImpl*>(participant)->get_id();
    int participantId = *(int*)&pid.guidPrefix[8];
    SNPRINTF(cfgbuffer, 50, "config_%ld", participantId);
    SNPRINTF(trabuffer, 50, "trans_%ld", participantId);

    OpenDDS::DCPS::TransportConfig_rch cfg = TheTransportRegistry->get_config(cfgbuffer);

    if(cfg.is_nil())
    {        
        cfg = TheTransportRegistry->create_config(cfgbuffer);

        if(cfg != NULL)
        {
            OpenDDS::DCPS::TransportInst_rch inst = TheTransportRegistry->create_inst(trabuffer, "rtps_udp");

            if(inst != NULL)
            {
                OpenDDS::DCPS::dynamic_rchandle_cast<OpenDDS::DCPS::RtpsUdpInst>(inst)->use_multicast_ = true;
                OpenDDS::DCPS::dynamic_rchandle_cast<OpenDDS::DCPS::RtpsUdpInst>(inst)->heartbeat_period_ = ACE_Time_Value(3);
                cfg->instances_.push_back(inst);
                TheTransportRegistry->bind_config(cfg, participant);

                returnedValue = 0;
            }
            else
            {
                printf("ERROR<%s::%s>: Cannot create transport instance\n", CLASS_NAME, METHOD_NAME);
            }
        }
        else
        {
            printf("ERROR<%s::%s>: Cannot create transport config object\n", CLASS_NAME, METHOD_NAME);
        }
    }

    return returnedValue;
#endif
}
