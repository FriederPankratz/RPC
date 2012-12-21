/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Server.cxx
 * This source file shows a simple example of how to create a server for interface SimpleDelay.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SimpleDelayServer.h"
#include "strategies/ThreadPoolStrategy.h"
#include "exceptions/Exceptions.h"
#include "utils/Utilities.h"

#include <iostream>

int main(int argc, char **argv)
{
    unsigned int threadPoolSize = 100;
    eProsima::RPCDDS::ThreadPoolStrategy *pool = NULL;
    SimpleDelayServer *server = NULL;
    
    // Create and initialize the server for interface "SimpleDelay".
    try
    {
        pool = new eProsima::RPCDDS::ThreadPoolStrategy(threadPoolSize);
        server = new SimpleDelayServer("SimpleDelayService", pool);
        server->serve();
    }
    catch(eProsima::RPCDDS::InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }
    
    while(1)
    {
        eProsima::RPCDDS::sleep(10000);
    }
    
    // Stop and delete the server.
    server->stop();
    delete server;
    delete pool;
    
    return 0;
}