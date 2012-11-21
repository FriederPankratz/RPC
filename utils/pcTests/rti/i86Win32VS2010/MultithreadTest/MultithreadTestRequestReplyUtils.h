/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestRequestReplyUtils.h
 * This header file contains the declaration of helpful functions for the DDS messages for interface MultithreadTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _MultithreadTest_REQUEST_REPLY_UTILS_H_
#define _MultithreadTest_REQUEST_REPLY_UTILS_H_

#include "utils/Messages.h"
#include "MultithreadTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


class MultithreadTest_testRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure MultithreadTest_testRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure MultithreadTest_testRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure MultithreadTest_testRequest.
         *
         * \param instance Pointer to the structure MultithreadTest_testRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(MultithreadTest_testRequest& instance, /*in*/ const Dato& dato1);
        
        /**
         * \brief This function extracts the parameters from the members of the structure MultithreadTest_testRequest.
         *
         * \param data Pointer to the structure MultithreadTest_testRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(MultithreadTest_testRequest& data, /*in*/ Dato& dato1);
};


class MultithreadTest_testReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure MultithreadTest_testReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure MultithreadTest_testReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure MultithreadTest_testReply.
         *
         * \param instance Pointer to the structure MultithreadTest_testReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(MultithreadTest_testReply& instance, /*out*/ const Dato& dato2, /*out*/ DDS_Long test_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure MultithreadTest_testReply.
         *
         * \param data Pointer to the structure MultithreadTest_testReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(MultithreadTest_testReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Dato& dato2, /*out*/ DDS_Long& test_ret);
};

 
#endif // _MultithreadTest_REQUEST_REPLY_UTILS_H_