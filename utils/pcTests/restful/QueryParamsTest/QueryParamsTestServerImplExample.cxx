/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file QueryParamsServerImplExample.cxx
 * This source file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "QueryParamsTestServerImplExample.h"

#include "boost/lexical_cast.hpp"

#include <iostream>

using namespace std;   
using namespace QueryParamsTest;


GetStringResponse queryParamsResourceServerImplExample::getString(/*in*/ const char* stringP)
{
    GetStringResponse getString_ret;
    GetStringResponse_initialize(&getString_ret);

	cout << "getString: " << stringP << endl;
	string response = "<Response>" + string(stringP) + "</Response>";

	getString_ret._d = 1;
	getString_ret._u.xmlGetStringResponse.status = 200;
	getString_ret._u.xmlGetStringResponse.xmlRepresentation = strdup(response.c_str());
   
    return getString_ret;
} 



GetByteResponse queryParamsResourceServerImplExample::getByte(/*in*/ DDS_Char byteP)
{
    GetByteResponse getByte_ret;
    GetByteResponse_initialize(&getByte_ret);

	cout << "getByte: " << byteP << endl;
	string response = "<Response>";
	response += byteP;
	response += "</Response>";

	getByte_ret._d = 1;
	getByte_ret._u.xmlGetByteResponse.status = 200;
	getByte_ret._u.xmlGetByteResponse.xmlRepresentation = strdup(response.c_str());
   
    return getByte_ret;
} 



GetUnsignedByteResponse queryParamsResourceServerImplExample::getUnsignedByte(/*in*/ DDS_Octet unsignedByteP)
{
    GetUnsignedByteResponse getUnsignedByte_ret;
    GetUnsignedByteResponse_initialize(&getUnsignedByte_ret);

	cout << "getUnsignedByte: " << unsignedByteP << endl;
	string response = "<Response>";
	response += unsignedByteP;
	response += "</Response>";

	getUnsignedByte_ret._d = 1;
	getUnsignedByte_ret._u.xmlGetUnsignedByteResponse.status = 200;
	getUnsignedByte_ret._u.xmlGetUnsignedByteResponse.xmlRepresentation = strdup(response.c_str());
   
    return getUnsignedByte_ret;
} 



GetShortResponse queryParamsResourceServerImplExample::getShort(/*in*/ DDS_Short shortP)
{
    GetShortResponse getShort_ret;
    GetShortResponse_initialize(&getShort_ret);

	cout << "getShort: " << shortP << endl;

	string response = "<Response>";
	response += boost::lexical_cast<string>(shortP);
	response += "</Response>";

	getShort_ret._d = 1;
	getShort_ret._u.xmlGetShortResponse.status = 200;
	getShort_ret._u.xmlGetShortResponse.xmlRepresentation = strdup(response.c_str());
   
    return getShort_ret;
} 



GetUnsignedShortResponse queryParamsResourceServerImplExample::getUnsignedShort(/*in*/ DDS_UnsignedShort unsignedShortP)
{
    GetUnsignedShortResponse getUnsignedShort_ret;
    GetUnsignedShortResponse_initialize(&getUnsignedShort_ret);

	cout << "getUnsignedShort: " << unsignedShortP << endl;
	string response = "<Response>";
	response += boost::lexical_cast<string>(unsignedShortP);
	response += "</Response>";

	getUnsignedShort_ret._d = 1;
	getUnsignedShort_ret._u.xmlGetUnsignedShortResponse.status = 200;
	getUnsignedShort_ret._u.xmlGetUnsignedShortResponse.xmlRepresentation = strdup(response.c_str());
   
    return getUnsignedShort_ret;
} 



GetIntResponse queryParamsResourceServerImplExample::getInt(/*in*/ DDS_Long intP)
{
    GetIntResponse getInt_ret;
    GetIntResponse_initialize(&getInt_ret);

	cout << "getInt: " << intP << endl;

	string response = "<Response>";
	response += boost::lexical_cast<string>(intP);
	response += "</Response>";

	getInt_ret._d = 1;
	getInt_ret._u.xmlGetIntResponse.status = 200;
	getInt_ret._u.xmlGetIntResponse.xmlRepresentation = strdup(response.c_str());
   
    return getInt_ret;
} 



GetUnsignedIntResponse queryParamsResourceServerImplExample::getUnsignedInt(/*in*/ DDS_UnsignedLong unsignedIntP)
{
    GetUnsignedIntResponse getUnsignedInt_ret;
    GetUnsignedIntResponse_initialize(&getUnsignedInt_ret);

	cout << "getUnsignedInt: " << unsignedIntP << endl;
	string response = "<Response>";
	response += boost::lexical_cast<string>(unsignedIntP);
	response += "</Response>";

	getUnsignedInt_ret._d = 1;
	getUnsignedInt_ret._u.xmlGetUnsignedIntResponse.status = 200;
	getUnsignedInt_ret._u.xmlGetUnsignedIntResponse.xmlRepresentation = strdup(response.c_str());
   
    return getUnsignedInt_ret;
} 



GetLongResponse queryParamsResourceServerImplExample::getLong(/*in*/ DDS_LongLong longP)
{
    GetLongResponse getLong_ret;
    GetLongResponse_initialize(&getLong_ret);

	cout << "getLong: " << longP << endl;

	string response = "<Response>";
	response += boost::lexical_cast<string>(longP);
	response += "</Response>";

	getLong_ret._d = 1;
	getLong_ret._u.xmlGetLongResponse.status = 200;
	getLong_ret._u.xmlGetLongResponse.xmlRepresentation = strdup(response.c_str());
   
    return getLong_ret;
} 



GetUnsignedLongResponse queryParamsResourceServerImplExample::getUnsignedLong(/*in*/ DDS_UnsignedLongLong unsignedLongP)
{
    GetUnsignedLongResponse getUnsignedLong_ret;
    GetUnsignedLongResponse_initialize(&getUnsignedLong_ret);

	cout << "getUnsignedLong: " << unsignedLongP << endl;
	string response = "<Response>";
	response += boost::lexical_cast<string>(unsignedLongP);
	response += "</Response>";

	getUnsignedLong_ret._d = 1;
	getUnsignedLong_ret._u.xmlGetUnsignedLongResponse.status = 200;
	getUnsignedLong_ret._u.xmlGetUnsignedLongResponse.xmlRepresentation = strdup(response.c_str());
   
    return getUnsignedLong_ret;
} 



GetFloatResponse queryParamsResourceServerImplExample::getFloat(/*in*/ DDS_Float floatP)
{
    GetFloatResponse getFloat_ret;
    GetFloatResponse_initialize(&getFloat_ret);

	cout << "getFloat: " << floatP << endl;

	string response = "<Response>";
	response += boost::lexical_cast<string>(floatP);
	response += "</Response>";

	getFloat_ret._d = 1;
	getFloat_ret._u.xmlGetFloatResponse.status = 200;
	getFloat_ret._u.xmlGetFloatResponse.xmlRepresentation = strdup(response.c_str());
   
    return getFloat_ret;
} 



GetDoubleResponse queryParamsResourceServerImplExample::getDouble(/*in*/ DDS_Double doubleP)
{
    GetDoubleResponse getDouble_ret;
    GetDoubleResponse_initialize(&getDouble_ret);

	cout << "getDouble: " << doubleP << endl;

	string response = "<Response>";
	response += boost::lexical_cast<string>(doubleP);
	response += "</Response>";

	getDouble_ret._d = 1;
	getDouble_ret._u.xmlGetDoubleResponse.status = 200;
	getDouble_ret._u.xmlGetDoubleResponse.xmlRepresentation = strdup(response.c_str());
   
    return getDouble_ret;
} 



GetBooleanResponse queryParamsResourceServerImplExample::getBoolean(/*in*/ DDS_Boolean booleanP)
{
    GetBooleanResponse getBoolean_ret;
    GetBooleanResponse_initialize(&getBoolean_ret);

	if(booleanP)
		cout << "getBoolean: true" << endl;
	else
		cout << "getBoolean: false" << endl;
	

	string response = "<Response>";
	if(booleanP)
		response += "true";
	else
		response += "false";
	response += "</Response>";

	getBoolean_ret._d = 1;
	getBoolean_ret._u.xmlGetBooleanResponse.status = 200;
	getBoolean_ret._u.xmlGetBooleanResponse.xmlRepresentation = strdup(response.c_str());
   
    return getBoolean_ret;
} 

