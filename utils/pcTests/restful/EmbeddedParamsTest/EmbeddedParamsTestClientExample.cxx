/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file EmbeddedParamsTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "EmbeddedParamsTestProxy.h"
#include "EmbeddedParamsTestRESTProtocol.h"
#include "transports/HttpProxyTransport.h"
#include "exceptions/Exceptions.h"

#include <iostream>
#include <string>

using namespace eprosima::rpcdds;
using namespace eprosima::rpcdds::exception;
using namespace eprosima::rpcdds::transport;
using namespace eprosima::rpcdds::protocol::rest;

using namespace std;
using namespace EmbeddedParamsTest;

int main(int argc, char **argv)
{
    EmbeddedParamsTestProtocol *protocol = NULL;
    ProxyTransport *transport = NULL;
    first_second_thirdResourceProxy *proxy = NULL;
    urlFixedSegment_fourthResourceProxy *proxy2 = NULL;
    
    // Creation of the proxy for interface "first_second_thirdResource".
    try
    {
        protocol = new EmbeddedParamsTestProtocol();
        transport = new HttpProxyTransport("127.0.0.1:8080");
        proxy = new first_second_thirdResourceProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }


    // Creation of the proxy for interface "urlFixedSegment_fourth".
    try
    {
        proxy2 = new urlFixedSegment_fourthResourceProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    
	// ******************************************************
    // Create and initialize parameters.
    first_second_third first_second_third;
    first_second_third_initialize(&first_second_third);

	first_second_third.first_ = -1;
	first_second_third.second_ = strdup("string1");
	first_second_third.third_ = 2.5;

    // Create and initialize return value.
    Get123Response get123_ret;
    Get123Response_initialize(&get123_ret);

    // Call to remote procedure "get123".
    try
    {
	cout << "get123" << endl;
       	get123_ret = proxy->get123(first_second_third);
	if(get123_ret._d == 1) {
		if(get123_ret._u.xmlGet123Response.status == 200 &&
			string(get123_ret._u.xmlGet123Response.xmlRepresentation).compare("<Response>-1, string1, 2.5</Response>") == 0)
		{
			cout << "\tTEST PASSED" << endl;
		} else {
			return 1;
		}
	} else {
		return 1;
	}
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
	return 1;
    }
    
    first_second_third_finalize(&first_second_third);

    Get123Response_finalize(&get123_ret);
	// ******************************************************

	// ******************************************************
    // Create and initialize parameters.
    urlFixedSegment_fourth urlFixedSegment_fourth;
    urlFixedSegment_fourth_initialize(&urlFixedSegment_fourth);

	urlFixedSegment_fourth.first_ = 3;
	urlFixedSegment_fourth.second_ = strdup("string2");
	urlFixedSegment_fourth.third_ = 4.5;
	urlFixedSegment_fourth.fourth_ = false;

    // Create and initialize return value.
    Get1234Response get1234_ret;
    Get1234Response_initialize(&get1234_ret);

    // Call to remote procedure "get123".
    try
    {
	cout << "get1234" << endl;

        get1234_ret = proxy2->get1234(urlFixedSegment_fourth);

	if(get1234_ret._d == 1) {
		if(get1234_ret._u.xmlGet1234Response.status == 200 &&
			string(get1234_ret._u.xmlGet1234Response.xmlRepresentation).compare("<Response>3, string2, 4.5, false</Response>") == 0)
		{
			cout << "\tTEST PASSED" << endl;
		} else {
			return 1;
		}
	} else {
		return 1;
	}
    }
    catch(SystemException &ex)
    {
        std::cout << ex.what() << std::endl;
	return 1;
    }
    
    urlFixedSegment_fourth_finalize(&urlFixedSegment_fourth);

    Get1234Response_finalize(&get1234_ret);
	// ******************************************************
    
    delete(proxy);
    delete(transport);
    delete(protocol);
   
    return 0;
}








