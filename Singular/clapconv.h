// emacs edit mode for this file is -*- C++ -*-
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
// $Id: clapconv.h,v 1.4 1997-05-05 13:40:02 obachman Exp $
/*
* ABSTRACT: convert data between Singular and factory
*/


#ifndef INCL_SINGCONV_H
#define INCL_SINGCONV_H

#include "mod2.h"
#include "structs.h"
#include "longalg.h"
#include <factory.h>

alg convClapPSingTr ( const CanonicalForm & f );
CanonicalForm convSingTrClapP( alg p );

poly convClapPSingP ( const CanonicalForm & f );
CanonicalForm convSingPClapP( poly p );

CanonicalForm convSingAPClapAP ( poly p , const Variable & a );
poly convClapAPSingAP ( const CanonicalForm & f );

CanonicalForm convSingAClapA ( alg p , const Variable & a );
alg convClapASingA ( const CanonicalForm & f );

CanonicalForm convSingTrPClapP ( poly p );
poly convClapPSingTrP ( const CanonicalForm & f );

// CanonicalForm convSingIClapI( int i);a <- by constructor of CanonicalForm
int convClapISingI( const CanonicalForm & f);
#endif /* INCL_SINGCONV_H */
