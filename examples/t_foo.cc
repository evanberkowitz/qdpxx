// -*- C++ -*-
//
// $Id: t_foo.cc,v 1.34 2004-06-30 21:48:02 edwards Exp $
//
/*! \file
 *  \brief Silly little internal test code
 */


#include "qdp.h"
#include "qdp_iogauge.h"

//using namespace std;

using namespace QDP;



int main(int argc, char *argv[])
{
  // Put the machine into a known state
  QDP_initialize(&argc, &argv);

  // Setup the layout
  const int foo[] = {2,2,1,1};
  multi1d<int> nrow(Nd);
  nrow = foo;  // Use only Nd elements
  Layout::setLattSize(nrow);
  Layout::create();

  XMLFileWriter xml("foo.xml");
//  xml.open("foo.xml");
  push(xml, "foo");

  write(xml,"nrow", nrow);
  write(xml,"logicalSize",Layout::logicalSize());

#if 1
  {
    LatticeColorMatrix a,b,c;
    LatticeComplex cc, dd;
    random(a); random(b); random(c);
    c = a*b;
    cc = trace(c);
    dd = trace(a*b);
    write(xml,"diff", Real(norm2(cc-dd)));
  }
#endif

#if 0
  {
    LatticeColorMatrix a,b,c;
    a = b = c = 1;

    LatticeComplex e;
    e = colorContract(a,b,c);

    write(xml,"e",e);
  }
#endif
  

  pop(xml);
  xml.close();

  // Time to bolt
  QDP_finalize();

  exit(0);
}
