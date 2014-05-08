/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file HelloWorldServerImplExample.cxx
 * This source file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcrestgen.
 */

#include "HelloWorldServerImplExample.h"




HelloWorld::HelloWorldResource::HelloResponse HelloWorldResourceServerImplExample::hello(/*in*/ const std::string& name)
{
    HelloWorld::HelloWorldResource::HelloResponse  hello_ret;

    hello_ret._d() = 1; // 1 -> XML representation
    hello_ret.xmlHelloResponse().status(200); // HTTP OK
	hello_ret.xmlHelloResponse().xmlRepresentation("<Response>Hello " + name + "!</Response>");
   
    return hello_ret;
} 


