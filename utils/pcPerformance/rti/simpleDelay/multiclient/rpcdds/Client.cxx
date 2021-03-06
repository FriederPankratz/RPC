/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for interface SimpleDelay.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SimpleDelayProxy.h"
#include "SimpleDelayRequestReplyPlugin.h"
#include "transports/UDPTransport.h"
#include "exceptions/Exceptions.h"

#include <iostream>
#include <fstream>
#include <boost/chrono.hpp>
#include "boost/config/user.hpp"
#include "boost/thread.hpp"

static boost::thread thread1, thread2, thread3, thread4;
boost::chrono::duration<double> duplicateArray[40000];
static int run = 0;
static uint32_t data_size;

void* executeThread(SimpleDelayProxy *proxy, int arrayPos)
{
    const char* const METHOD_NAME = "executeThread";
    int count = 0;

    // Wait until start.
    while(!run)
    {
        boost::this_thread::sleep(boost::posix_time::microseconds(200));
    }

    for(; count < 10000; ++count)
    {
        Estructura es, ret;
        Estructura_initialize(&es);
        es.valor1 = count;
        es.valor2 = count*2;
        es.valor3 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";
        es.seq.ensure_length(data_size, data_size);
        for(int i = 0; i < data_size; ++i)
            es.seq[i] = i;

        try
        {
            boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
            ret = proxy->duplicate(es);
            duplicateArray[arrayPos++] = boost::chrono::system_clock::now() - call_start;
        }
        catch(eProsima::RPCDDS::Exception &ex)
        {
            printf("Error in operation (%d). %s\n", count, ex.what());
        }
        es.valor3 = NULL;
        Estructura_finalize(&es);
    }

    return NULL;
}

int main(int argc, char **argv)
{
    boost::chrono::duration<double> program_seconds;

    if(argc == 3)
    {
        uint16_t ip[4];

        // Check that the parameter is a IP address.
        if(sscanf(argv[1], "%hu.%hu.%hu.%hu", &ip[0], &ip[1], &ip[2], &ip[3]) == 4)
        {
            if(sscanf(argv[2], "%u", &data_size) == 1)
            {
                eProsima::RPCDDS::UDPClientTransport *udpt1 = NULL;
                eProsima::RPCDDS::UDPClientTransport *udpt2 = NULL;
                eProsima::RPCDDS::UDPClientTransport *udpt3 = NULL;
                eProsima::RPCDDS::UDPClientTransport *udpt4 = NULL;
                SimpleDelayProxy *proxy1 = NULL;
                SimpleDelayProxy *proxy2 = NULL;
                SimpleDelayProxy *proxy3 = NULL;
                SimpleDelayProxy *proxy4 = NULL;

                // Creation of the proxy for interface "SimpleDelay".
                try
                {
                    udpt1 = new eProsima::RPCDDS::UDPClientTransport(argv[1]);
                    proxy1 = new SimpleDelayProxy("SimpleDelayService", udpt1);
                    udpt2 = new eProsima::RPCDDS::UDPClientTransport(argv[1]);
                    proxy2 = new SimpleDelayProxy("SimpleDelayService", udpt2);
                    udpt3 = new eProsima::RPCDDS::UDPClientTransport(argv[1]);
                    proxy3 = new SimpleDelayProxy("SimpleDelayService", udpt3);
                    udpt4 = new eProsima::RPCDDS::UDPClientTransport(argv[1]);
                    proxy4 = new SimpleDelayProxy("SimpleDelayService", udpt4);
                }
                catch(eProsima::RPCDDS::InitializeException &ex)
                {
                    std::cout << ex.what() << std::endl;
                    return -1;
                }

                sleep(10);

                thread1 = boost::thread(executeThread, proxy1, 0);
                thread2 = boost::thread(executeThread, proxy2, 10000);
                thread3 = boost::thread(executeThread, proxy3, 20000);
                thread4 = boost::thread(executeThread, proxy4, 30000);

                run = 1;

                boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

                thread1.join();
                thread2.join();
                thread3.join();
                thread4.join();
                run = 0;

                program_seconds = boost::chrono::system_clock::now() - program_start;

                // Print total execution time.
                std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

                // Calcular latencia media y el que más tarda.
                boost::chrono::duration<double> max_dur = duplicateArray[0];
                int max_pos = 0;
                boost::chrono::duration<double> min_dur = duplicateArray[0];
                int min_pos = 0;
                boost::chrono::duration<double> suma_dur = duplicateArray[0];

                for(int count = 1; count < 40000; ++count)
                {
                    if(duplicateArray[count] > max_dur)
                    {
                        max_dur = duplicateArray[count];
                        max_pos = count;
                    }

                    if(duplicateArray[count] < min_dur)
                    {
                        min_dur = duplicateArray[count];
                        min_pos = count;
                    }

                    suma_dur = suma_dur + duplicateArray[count];
                }

                std::sort(duplicateArray, duplicateArray + 40000);

                std::cout << "The faster call was " << min_pos << " with " << min_dur << std::endl;
                std::cout << "The slowest call was " << max_pos << " with " << max_dur << std::endl;
                std::cout << "The latency average was " << suma_dur / 40000 << std::endl;
                std::cout << "The 20000th value was " << duplicateArray[20000] << std::endl;

                // Guardar datos en ficheros.
                std::ofstream file;
                file.open("clientes.txt", std::ios::app);
                file << min_dur << " " << max_dur << " " << suma_dur/40000 << " " << duplicateArray[20000] << std::endl;
                file.close();
                // Cliente 1
                /*std::ofstream file;
                file.open("client1.txt");
                for(int count = 0; count < 10000; ++count)
                    file << count << " " << duplicateArray[count] << std::endl;
                file.close();
                // Cliente 2
                file.open("client2.txt");
                for(int count = 0; count < 10000; ++count)
                    file << count << " " << duplicateArray[10000 + count] << std::endl;
                file.close();
                file.open("client3.txt");
                for(int count = 0; count < 10000; ++count)
                    file << count << " " << duplicateArray[20000 + count] << std::endl;
                file.close();
                file.open("client4.txt");
                for(int count = 0; count < 10000; ++count)
                    file << count << " " << duplicateArray[30000 + count] << std::endl;
                file.close();*/

                delete(proxy1);
                delete(proxy2);
                delete(proxy3);
                delete(proxy4);
            }
            else
            {
                std::cout << "Second parameter is not a valid data size." << std::endl;
            }
        }
        else
        {
            std::cout << "Parameter is not a valid IPv4 address." << std::endl;
        }
    }
    else
    {
        std::cout << "The server IP address is expected." << std::endl;
    }

    return 0;
}
