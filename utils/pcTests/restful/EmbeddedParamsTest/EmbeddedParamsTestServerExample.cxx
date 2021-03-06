/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this FASTRPC distribution.
 *
 *************************************************************************
 * 
 * @file EmbeddedParamsTestServerExample.cxx
 * This source file shows a simple example of how to create a server for an interface.
 *
 * This file was generated by the tool rpcrestgen.
 */

#include "EmbeddedParamsTestServer.h"
#include "fastrpc/strategies/ThreadPoolStrategy.h"
#include "EmbeddedParamsTestRESTProtocol.h"
#include "fastrpc/transports/HttpServerTransport.h"
#include "fastrpc/exceptions/Exceptions.h"
#include "fastrpc/utils/Utilities.h"
#include "EmbeddedParamsTestServerImplExample.h"

#include <iostream>

using namespace eprosima::rpc;
using namespace eprosima::rpc::exception;
using namespace eprosima::rpc::strategy;
using namespace eprosima::rpc::transport;
using namespace eprosima::rpc::protocol::rest;

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
        eprosima::rpc::sleep(10000);
    }
    
    // Stop and delete the server.
    server->stop();
    delete server;
    delete protocol;
    delete transport;
    delete pool;
    
    return 0;
}








