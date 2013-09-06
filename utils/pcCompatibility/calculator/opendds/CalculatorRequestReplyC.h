// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.6a_p13 ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:135

#ifndef _TAO_IDL_OPENDDS_CALCULATORREQUESTREPLYC_H_
#define _TAO_IDL_OPENDDS_CALCULATORREQUESTREPLYC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "MessageHeaderC.h"
#include "CalculatorC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_additionRequest;

typedef
  TAO_Var_Var_T<
      Calculator_additionRequest
    >
  Calculator_additionRequest_var;

typedef
  TAO_Out_T<
      Calculator_additionRequest
    >
  Calculator_additionRequest_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_additionRequest
{
  typedef Calculator_additionRequest_var _var_type;
  typedef Calculator_additionRequest_out _out_type;
  
  
  RequestHeader header;
  ::CORBA::Long x;
  ::CORBA::Long y;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_additionRequest;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_additionReply;

typedef
  TAO_Var_Var_T<
      Calculator_additionReply
    >
  Calculator_additionReply_var;

typedef
  TAO_Out_T<
      Calculator_additionReply
    >
  Calculator_additionReply_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_additionReply
{
  typedef Calculator_additionReply_var _var_type;
  typedef Calculator_additionReply_out _out_type;
  
  
  ReplyHeader header;
  ::CORBA::Long addition_ret;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_additionReply;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_substractionRequest;

typedef
  TAO_Var_Var_T<
      Calculator_substractionRequest
    >
  Calculator_substractionRequest_var;

typedef
  TAO_Out_T<
      Calculator_substractionRequest
    >
  Calculator_substractionRequest_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_substractionRequest
{
  typedef Calculator_substractionRequest_var _var_type;
  typedef Calculator_substractionRequest_out _out_type;
  
  
  RequestHeader header;
  ::CORBA::Long x;
  ::CORBA::Long y;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_substractionRequest;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_substractionReply;

typedef
  TAO_Var_Var_T<
      Calculator_substractionReply
    >
  Calculator_substractionReply_var;

typedef
  TAO_Out_T<
      Calculator_substractionReply
    >
  Calculator_substractionReply_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_substractionReply
{
  typedef Calculator_substractionReply_var _var_type;
  typedef Calculator_substractionReply_out _out_type;
  
  
  ReplyHeader header;
  ::CORBA::Long substraction_ret;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_substractionReply;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_multiplicationRequest;

typedef
  TAO_Var_Var_T<
      Calculator_multiplicationRequest
    >
  Calculator_multiplicationRequest_var;

typedef
  TAO_Out_T<
      Calculator_multiplicationRequest
    >
  Calculator_multiplicationRequest_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_multiplicationRequest
{
  typedef Calculator_multiplicationRequest_var _var_type;
  typedef Calculator_multiplicationRequest_out _out_type;
  
  
  RequestHeader header;
  ::CORBA::Long x;
  ::CORBA::Long y;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_multiplicationRequest;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_multiplicationReply;

typedef
  TAO_Var_Var_T<
      Calculator_multiplicationReply
    >
  Calculator_multiplicationReply_var;

typedef
  TAO_Out_T<
      Calculator_multiplicationReply
    >
  Calculator_multiplicationReply_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_multiplicationReply
{
  typedef Calculator_multiplicationReply_var _var_type;
  typedef Calculator_multiplicationReply_out _out_type;
  
  
  ReplyHeader header;
  ::CORBA::Long multiplication_ret;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_multiplicationReply;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_divisionRequest;

typedef
  TAO_Var_Var_T<
      Calculator_divisionRequest
    >
  Calculator_divisionRequest_var;

typedef
  TAO_Out_T<
      Calculator_divisionRequest
    >
  Calculator_divisionRequest_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_divisionRequest
{
  typedef Calculator_divisionRequest_var _var_type;
  typedef Calculator_divisionRequest_out _out_type;
  
  
  RequestHeader header;
  ::CORBA::Long x;
  ::CORBA::Long y;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_divisionRequest;

// TAO_IDL - Generated from
// be\be_type.cpp:269

struct Calculator_divisionReply;

typedef
  TAO_Var_Var_T<
      Calculator_divisionReply
    >
  Calculator_divisionReply_var;

typedef
  TAO_Out_T<
      Calculator_divisionReply
    >
  Calculator_divisionReply_out;

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:57

struct  Calculator_divisionReply
{
  typedef Calculator_divisionReply_var _var_type;
  typedef Calculator_divisionReply_out _out_type;
  
  
  ReplyHeader header;
  ::CORBA::Long division_ret;
};

// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:49

extern  ::CORBA::TypeCode_ptr const _tc_Calculator_divisionReply;

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:64

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_additionRequest &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_additionRequest &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_additionReply &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_additionReply &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_substractionRequest &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_substractionRequest &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_substractionReply &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_substractionReply &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_multiplicationRequest &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_multiplicationRequest &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_multiplicationReply &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_multiplicationReply &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_divisionRequest &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_divisionRequest &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\richi\workspace\desarrollo\dds\opendds\instalaciones\opendds3.3\ace_wrappers_x64\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:54


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Calculator_divisionReply &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Calculator_divisionReply &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1228
#if defined (__ACE_INLINE__)
#include "CalculatorRequestReplyC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

