#ifndef _SequenceTestSERVER_IMPL_H_
#define _SequenceTestSERVER_IMPL_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/Messages.h"
#include "SequenceTestRequestReplyUtils.h"

/**
 * \brief This class is the skeleton of the servant and its remote procedures has to be implemented.
 *        When the SequenceTestServer object is created, it creates one instance of this class.
 */
class SequenceTestServerImpl
{
    public:

        /// \brief The default constructor.
        SequenceTestServerImpl(){}

        /// \brief The default destructor.
        virtual ~SequenceTestServerImpl(){}

         
        largo getSLong(/*in*/ const largo& l1, /*inout*/ largo& l2, /*out*/ largo& l3);
         
        cadena getString(/*in*/ const cadena& s1, /*inout*/ cadena& s2, /*out*/ cadena& s3);
         
        dattos getStringBounded(/*in*/ const dattos& sb1, /*inout*/ dattos& sb2, /*out*/ dattos& sb3);
};

#endif // _SequenceTestSERVER_IMPL_H_