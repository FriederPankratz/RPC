/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCCORBA::LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for interface BasicTypeTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "BasicTypeTestProxy.h"
#include "BasicTypeTestRequestReplyTypeSupportImpl.h"
#include "exceptions/Exceptions.h"

#include <iostream>

int main(int argc, char **argv)
{
    BasicTypeTestProxy *proxy = NULL;
    
    // Creation of the proxy for interface "BasicTypeTest".
    try
    {
        proxy = new BasicTypeTestProxy("BasicTypeTestService", 0, 30000L);
    }
    catch(eProsima::RPCDDS::InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    // Create and initialize parameters.
    CORBA::Octet  oc1 = 1;
    CORBA::Octet  oc2 = 2;
    CORBA::Octet  oc3 = 0;

    // Create and initialize return value.
    CORBA::Octet  getOctet_ret = 0;

    // Call to remote procedure "getOctet".
    try
    {
        getOctet_ret = proxy->getOctet(oc1, oc2, oc3);

        if(oc3 != 2 ||
                getOctet_ret != 1 ||
                oc2 != 3 ||
                oc1 != 1)
        {
            printf("TEST FAILED<getOctet>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getOctet>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Char  ch1 = 1;       
    CORBA::Char  ch2 = 2;       
    CORBA::Char  ch3 = 0;    
    CORBA::Char  getCharRetValue = 0;       

    try
    {
        getCharRetValue = proxy->getChar(ch1, ch2, ch3);   

        if(ch3 != 2 ||
                getCharRetValue != 1 ||
                ch2 != 3 ||
                ch1 != 1)
        {
            printf("TEST FAILED<getChar>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getChar>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::WChar  wch1 = 1;       
    CORBA::WChar  wch2 = 2;       
    CORBA::WChar  wch3 = 0; 
    CORBA::WChar  getWCharRetValue = 0;       

    try
    {
        getWCharRetValue = proxy->getWChar(wch1, wch2, wch3);

        if(wch3 != 2 ||
                getWCharRetValue != 1 ||
                wch2 != 3 ||
                wch1 != 1)
        {
            printf("TEST FAILED<getWChar>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getWChar>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Short  sh1 = 1;       
    CORBA::Short  sh2 = 2;       
    CORBA::Short  sh3 = 0;    
    CORBA::Short  getShortRetValue = 0;       

    try
    {
        getShortRetValue = proxy->getShort(sh1, sh2, sh3);

        if(sh3 != 2 ||
                getShortRetValue != 1 ||
                sh2 != 3 ||
                sh1 != 1)
        {
            printf("TEST FAILED<getShort>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getShort>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::UShort  ush1 = 1;       
    CORBA::UShort  ush2 = 2;       
    CORBA::UShort  ush3 = 0;    
    CORBA::UShort  getUShortRetValue = 0;       

    try
    {
        getUShortRetValue = proxy->getUShort(ush1, ush2, ush3);

        if(ush3 != 2 ||
                getUShortRetValue != 1 ||
                ush2 != 3 ||
                ush1 != 1)
        {
            printf("TEST FAILED<getUShort>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getUShort>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Long  lo1 = 1;       
    CORBA::Long  lo2 = 2;       
    CORBA::Long  lo3 = 0;    
    CORBA::Long  getLongRetValue = 0;       

    try
    {
        getLongRetValue = proxy->getLong(lo1, lo2, lo3);

        if(lo3 != 2 ||
                getLongRetValue != 1 ||
                lo2 != 3 ||
                lo1 != 1)
        {
            printf("TEST FAILED<getLong>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getLong>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::ULong  ulo1 = 1;       
    CORBA::ULong  ulo2 = 2;       
    CORBA::ULong  ulo3 = 0;    
    CORBA::ULong  getULongRetValue = 0;       

    try
    {
        getULongRetValue = proxy->getULong(ulo1, ulo2, ulo3);

        if(ulo3 != 2 ||
                getULongRetValue != 1 ||
                ulo2 != 3 ||
                ulo1 != 1)
        {
            printf("TEST FAILED<getULong>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getULong>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::LongLong  llo1 = 1;       
    CORBA::LongLong  llo2 = 2;       
    CORBA::LongLong  llo3 = 0;    
    CORBA::LongLong  getLLongRetValue = 0;       

    try
    {
        getLLongRetValue = proxy->getLLong(llo1, llo2, llo3);

        if(llo3 != 2 ||
                getLLongRetValue != 1 ||
                llo2 != 3 ||
                llo1 != 1)
        {
            printf("TEST FAILED<getLLong>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getLLong>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::ULongLong  ullo1 = 1;       
    CORBA::ULongLong  ullo2 = 2;       
    CORBA::ULongLong  ullo3 = 0;    
    CORBA::ULongLong  getULLongRetValue = 0;       

    try
    {
        getULLongRetValue = proxy->getULLong(ullo1, ullo2, ullo3);

        if(ullo3 != 2 ||
                getULLongRetValue != 1 ||
                ullo2 != 3 ||
                ullo1 != 1)
        {
            printf("TEST FAILED<getULLong>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getULLong>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Float  fl1 = 1.0;       
    CORBA::Float  fl2 = 2.0;       
    CORBA::Float  fl3 = 0;    
    CORBA::Float  getFloatRetValue = 0;       

    try
    {
        getFloatRetValue = proxy->getFloat(fl1, fl2, fl3);

        if(fl3 != 2.0 ||
                getFloatRetValue != 1.0 ||
                fl2 != 3.0 ||
                fl1 != 1.0)
        {
            printf("TEST FAILED<getFloat>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getFloat>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Double  do1 = 1.0;       
    CORBA::Double  do2 = 2.0;       
    CORBA::Double  do3 = 0;    
    CORBA::Double  getDoubleRetValue = 0;       

    try
    {
        getDoubleRetValue = proxy->getDouble(do1, do2, do3);

        if(do3 != 2.0 ||
                getDoubleRetValue != 1.0 ||
                do2 != 3.0 ||
                do1 != 1.0)
        {
            printf("TEST FAILED<getDouble>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getDouble>: %s\n", ex.what());
        _exit(-1);
    }

    CORBA::Boolean  bo1 = true;       
    CORBA::Boolean  bo2 = false;       
    CORBA::Boolean  bo3 = false;    
    CORBA::Boolean  getBooleanRetValue = false;       

    try
    {
        getBooleanRetValue = proxy->getBoolean(bo1, bo2, bo3);

        if(bo3 != false ||
                getBooleanRetValue != true ||
                bo2 != true ||
                bo1 != true)
        {
            printf("TEST FAILED<getBoolean>: Wrong values\n");
            _exit(-1);
        }
    }
    catch(eProsima::RPCDDS::Exception &ex)
    {
        printf("TEST FAILED<getBoolean>: %s\n", ex.what());
        _exit(-1);
    }

    printf("TEST SUCCESFULLY\n");

    delete(proxy);

    _exit(0);
   
    return 0;
}