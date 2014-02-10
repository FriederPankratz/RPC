/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServerImplExample.cxx
 * This source file contains an example of the declaration of a servant.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorServerImplExample.h"
DDS_Long CalculatorServerImplExample::addition(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2)
{
    DDS_Long  addition_ret = value1 + value2;
   
    return addition_ret;
} 

DDS_Long CalculatorServerImplExample::subtraction(/*in*/ DDS_Long value1, /*in*/ DDS_Long value2)
{
    DDS_Long  subtraction_ret = value1 - value2;
   
    return subtraction_ret;
} 
