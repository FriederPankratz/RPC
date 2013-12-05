/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file EmbeddedParamsTestServerExample.cxx
 * This source file shows a simple example of how to create a server for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "EmbeddedParamsTestServer.h"
#include "strategies/ThreadPoolStrategy.h"
#include "EmbeddedParamsTestRESTProtocol.h"
#include "transports/HttpServerTransport.h"
#include "exceptions/Exceptions.h"
#include "utils/Utilities.h"
#include "EmbeddedParamsTestServerImplExample.h"

#include <iostream>

using namespace eprosima::rpcdds;
using namespace eprosima::rpcdds::exception;
using namespace eprosima::rpcdds::strategy;
using namespace eprosima::rpcdds::transport;
using namespace eprosima::rpcdds::protocol::rest;

using namespace EmbeddedParamsTest;

int main(int argc, char **argv)
{
    unsigned int threadPoolSize = 5;
    ThreadPoolStrategy *pool = NULL;
    EmbeddedParamsTestProtocol *protocol = NULL;
    HttpServerTransport *transport = NULL;
    first_second_thirdResourceServer *server = NULL;
    first_second_thirdResourceServerImplExample servant;
    
    // Create and initialize the server for interface "first_second_thirdResource".
    try
    {
        pool = new ThreadPoolStrategy(threadPoolSize);
        protocol = new EmbeddedParamsTestProtocol();
        transport = new HttpServerTransport("127.0.0.1:8080");
        server = new first_second_thirdResourceServer(*pool, *transport, *protocol, servant);
        server->serve();
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }


    urlFixedSegment_fourthResourceServer *server2 = NULL;
    urlFixedSegment_fourthResourceServerImplExample servant2;
    // Create and initialize the server for interface "urlFixedSegment_fourth".
    try
    {
        server2 = new urlFixedSegment_fourthResourceServer(*pool, *transport, *protocol, servant2);
        server2->serve();
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }


    
    while(1)
    {
        eprosima::rpcdds::sleep(10000);
    }
    
    // Stop and delete the server.
    server->stop();
    delete server;
    delete protocol;
    delete transport;
    delete pool;
    
    return 0;
}








