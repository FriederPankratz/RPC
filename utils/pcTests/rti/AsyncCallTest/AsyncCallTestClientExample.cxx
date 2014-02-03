/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "AsyncCallTestProxy.h"
#include "AsyncCallTestDDSProtocol.h"
#include "rpcdds/transports/dds/UDPProxyTransport.h"
#include "rpcdds/exceptions/Exceptions.h"

#include <iostream>

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

class GetLongHandler : public AsyncCallTest_getLongCallbackHandler
{
    public:

        GetLongHandler() : m_state(0){}

        void getLong(/*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret)
        {
            if(lo3 != 2 ||
                    getLong_ret != 1 ||
                    lo2 != 3)
            {
                std::cout << "TEST FAILED<getLong>: Wrong values" << std::endl;
                m_state = 2;
                return;
            }

            m_state = 1;
        }

        void on_exception(const SystemException &ex)
        {
            std::cout << "TEST FAILED<on_exception>: " << ex.what() << std::endl;
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class GetBooleanHandler : public AsyncCallTest_getBooleanCallbackHandler
{
    public:
        GetBooleanHandler() : m_state(0){}

        void getBoolean(/*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret)
        {
            if(bo3 != RTI_FALSE ||
                    getBoolean_ret != RTI_TRUE ||
                    bo2 != RTI_TRUE)
            {
                std::cout << "TEST FAILED<getBoolean>: Wrong values" << std::endl;
                m_state = 2;
                return;
            }

            m_state = 1;
        }

        void on_exception(const SystemException &ex)
        {
            std::cout << "TEST FAILED<on_exception>: " << ex.what() << std::endl;
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class GetStringHandler : public AsyncCallTest_getStringCallbackHandler
{
    public:

        GetStringHandler() : m_state(0){}

        void getString(/*inout*/ const char* s2, /*out*/ const char* s3, /*out*/ const char* getString_ret)
        {
            if(strcmp(s3, "PRUEBA2") != 0 ||
                    strcmp(getString_ret, "PRUEBA") != 0 ||
                    strcmp(s2, "PRUEBAPRUEBA2") != 0)
            {
                std::cout << "TEST FAILED<getString>: Wrong values" << std::endl;
                m_state = 2;
                return;
            }       

            m_state = 1;
        }
   
        void on_exception(const SystemException &ex)
        {
            std::cout << "TEST FAILED<on_exception>: " << ex.what() << std::endl;
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

class DuplicateHandler : public AsyncCallTest_duplicateCallbackHandler
{
    public:
        DuplicateHandler() : m_state(0){}

        void duplicate(/*out*/ const Structure& duplicate_ret)
        {
            if(duplicate_ret.dato != 10 ||
                    strcmp(duplicate_ret.message, "HOLA") != 0)
            {
                std::cout << "TEST FAILED<duplicate>: Wrong values" << std::endl;
                m_state = 2;
                return;
            }

            m_state = 1;
        }
   
        void on_exception(const SystemException &ex)
        {
            std::cout << "TEST FAILED<on_exception>: " << ex.what() << std::endl;
            m_state = 2;
        }

        int getState() const
        {
            return m_state;
        }

    private:

        int m_state;
};

int main(int argc, char **argv)
{
    AsyncCallTestProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    AsyncCallTestProxy *proxy = NULL;

    try
    {
        protocol = new AsyncCallTestProtocol();
        transport = new UDPProxyTransport("AsyncCallTestService");
        proxy = new AsyncCallTestProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    DDS_Long  lo1 = 1;       
    DDS_Long  lo2 = 2;       
    GetLongHandler getLong_handler;

    try
    {
        proxy->getLong_async(getLong_handler, lo1, lo2);

        while(getLong_handler.getState() == 0)
        {
#if defined(RTI_WIN32)
            Sleep(1000);
#elif defined(RTI_LINUX)
            sleep(1);
#endif
        }

        if(getLong_handler.getState() == 2)
            _exit(-1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLong_async>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Boolean  bo1 = RTI_TRUE;       
    DDS_Boolean  bo2 = RTI_FALSE;       
    GetBooleanHandler getBoolean_handler;

    try
    {
        proxy->getBoolean_async(getBoolean_handler, bo1, bo2);

        while(getBoolean_handler.getState() == 0)
        {
#if defined(RTI_WIN32)
            Sleep(1000);
#elif defined(RTI_LINUX)
            sleep(1);
#endif
        }

        if(getBoolean_handler.getState() == 2)
            _exit(-1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getBoolean_async>: " << ex.what() << std::endl;
        _exit(-1);
    }

    char*  s1  = DDS::String_dup("PRUEBA");       
    char*  s2  = DDS::String_dup("PRUEBA2");       
    GetStringHandler getString_handler;

    try
    {
        proxy->getString_async(getString_handler, s1, s2);

        while(getString_handler.getState() == 0)
        {
#if defined(RTI_WIN32)
            Sleep(1000);
#elif defined(RTI_LINUX)
            sleep(1);
#endif
        }

        if(getString_handler.getState() == 2)
            _exit(-1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getString_async>: " << ex.what() << std::endl;
        _exit(-1);
    }

    if(s1 != NULL) DDS::String_free(s1);    
    if(s2 != NULL) DDS::String_free(s2);    

    Structure ev;
    DuplicateHandler duplicate_handler;

	Structure_initialize(&ev);    
        
    ev.dato = 10;
    ev.message = DDS_String_dup("HOLA");

    try
    {
        proxy->duplicate_async(duplicate_handler, ev);

        while(duplicate_handler.getState() == 0)
        {
#if defined(RTI_WIN32)
            Sleep(1000);
#elif defined(RTI_LINUX)
            sleep(1);
#endif
        }

        if(duplicate_handler.getState() == 2)
            _exit(-1);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<duplicate_async>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Structure_finalize(&ev);   

	// Test the close of the proxy with pending asynchrnous tasks.
	DDS_Long  clo1 = 1;       
    DDS_Long  clo2 = 2;       
    GetLongHandler cgetLong_handler;
	DDS_Boolean  cbo1 = RTI_TRUE;       
    DDS_Boolean  cbo2 = RTI_FALSE;       
    GetBooleanHandler cgetBoolean_handler;
	char*  cs1  = DDS::String_dup("PRUEBA");       
    char*  cs2  = DDS::String_dup("PRUEBA2");       
    GetStringHandler cgetString_handler;  
    Structure cev;
    DuplicateHandler cduplicate_handler;

	Structure_initialize(&cev);    
        
    cev.dato = 10;
    cev.message = DDS_String_dup("HOLA");

    try
    {
        proxy->getLong_async(cgetLong_handler, clo1, clo2);
		proxy->getBoolean_async(cgetBoolean_handler, cbo1, cbo2);
		proxy->getString_async(cgetString_handler, cs1, cs2);
		proxy->duplicate_async(cduplicate_handler, cev);
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<closing>: " << ex.what() << std::endl;
        _exit(-1);
    }

    if(cs1 != NULL) DDS::String_free(cs1);    
    if(cs2 != NULL) DDS::String_free(cs2);  
    Structure_finalize(&cev);   

    std::cout << "TEST SUCCESFULLY" << std::endl;

    delete(proxy);

    _exit(0);
    return 0;
}
