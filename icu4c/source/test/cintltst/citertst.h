/********************************************************************
 * COPYRIGHT: 
 * Copyright (c) 1997-2001, International Business Machines Corporation and
 * others. All Rights Reserved.
 ********************************************************************/
/********************************************************************************
*
* File CITERTST.H
*
* Modification History:
*        Name                     Description            
*     Madhu Katragadda            Converted to C
*********************************************************************************/

/**
 * Collation Iterator tests.
 * (Let me reiterate my position...)
 */

#ifndef _CITERCOLLTST
#define _CITERCOLLTST

#include "cintltst.h"
#include "unicode/utypes.h"
#include "unicode/ucol.h"

#define MAX_TOKEN_LEN 16

    /**
    * Test for CollationElementIterator previous and next for the whole set of
    * unicode characters.
    */
    static void TestUnicodeChar(void);
    /**
    * Test for CollationElementIterator previous and next for the whole set of
    * unicode characters with normalization on.
    */
    static void TestNormalizedUnicodeChar(void);
    /**
    * Test incremental normalization
    */
    static void TestNormalization(void);
     /**
     * Test for CollationElementIterator.previous()
     *
     * @bug 4108758 - Make sure it works with contracting characters
     * 
     */
    static void TestPrevious(void);

    /**
     * Test for getOffset() and setOffset()
     */
    static void TestOffset(void);
    /**
     * Test for setText()
     */
    static void TestSetText(void);
    /** @bug 4108762
     * Test for getMaxExpansion()
     */
    static void TestMaxExpansion(void);
    /**
    * Test Bug 672, where different locales give a different offset after 
    * a previous for the same string at the same position
    */
    static void TestBug672(void);
    /**
    * Test iterators with an relatively small buffer
    */
    static void TestSmallBuffer(void);
    
    /*------------------------------------------------------------------------
     Internal utilities
     */

    static void backAndForth(UCollationElements* iter);
    
    /**
     * Return an integer array containing all of the collation orders
     * returned by calls to next on the specified iterator
     */
    static int32_t* getOrders(UCollationElements* iter, int32_t *orderLength);

    
    static void assertEqual(UCollationElements *i1, UCollationElements *i2);

    
    static  UChar *test1;
    static  UChar *test2;



#endif
