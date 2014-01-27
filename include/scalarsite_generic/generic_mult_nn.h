#ifdef __MIC
#warning "using _inline_generic_mult_su3_nn for MIC"

#define _inline_generic_mult_su3_nn(aa,bb,cc) \
{\
	mic_MatMult(cc,aa,bb);	\
}

#else
#define _inline_generic_mult_su3_nn(aa,bb,cc) \
{ \
  cc.elem(0,0).real()  = aa.elem(0,0).real()*bb.elem(0,0).real(); \
  cc.elem(0,0).real() -= aa.elem(0,0).imag()*bb.elem(0,0).imag(); \
  cc.elem(0,0).real() += aa.elem(0,1).real()*bb.elem(1,0).real(); \
  cc.elem(0,0).real() -= aa.elem(0,1).imag()*bb.elem(1,0).imag(); \
  cc.elem(0,0).real() += aa.elem(0,2).real()*bb.elem(2,0).real(); \
  cc.elem(0,0).real() -= aa.elem(0,2).imag()*bb.elem(2,0).imag(); \
  cc.elem(0,0).imag()  = aa.elem(0,0).real()*bb.elem(0,0).imag(); \
  cc.elem(0,0).imag() += aa.elem(0,0).imag()*bb.elem(0,0).real(); \
  cc.elem(0,0).imag() += aa.elem(0,1).real()*bb.elem(1,0).imag(); \
  cc.elem(0,0).imag() += aa.elem(0,1).imag()*bb.elem(1,0).real(); \
  cc.elem(0,0).imag() += aa.elem(0,2).real()*bb.elem(2,0).imag(); \
  cc.elem(0,0).imag() += aa.elem(0,2).imag()*bb.elem(2,0).real(); \
  cc.elem(1,0).real()  = aa.elem(1,0).real()*bb.elem(0,0).real(); \
  cc.elem(1,0).real() -= aa.elem(1,0).imag()*bb.elem(0,0).imag(); \
  cc.elem(1,0).real() += aa.elem(1,1).real()*bb.elem(1,0).real(); \
  cc.elem(1,0).real() -= aa.elem(1,1).imag()*bb.elem(1,0).imag(); \
  cc.elem(1,0).real() += aa.elem(1,2).real()*bb.elem(2,0).real(); \
  cc.elem(1,0).real() -= aa.elem(1,2).imag()*bb.elem(2,0).imag(); \
  cc.elem(1,0).imag()  = aa.elem(1,0).real()*bb.elem(0,0).imag(); \
  cc.elem(1,0).imag() += aa.elem(1,0).imag()*bb.elem(0,0).real(); \
  cc.elem(1,0).imag() += aa.elem(1,1).real()*bb.elem(1,0).imag(); \
  cc.elem(1,0).imag() += aa.elem(1,1).imag()*bb.elem(1,0).real(); \
  cc.elem(1,0).imag() += aa.elem(1,2).real()*bb.elem(2,0).imag(); \
  cc.elem(1,0).imag() += aa.elem(1,2).imag()*bb.elem(2,0).real(); \
  cc.elem(2,0).real()  = aa.elem(2,0).real()*bb.elem(0,0).real(); \
  cc.elem(2,0).real() -= aa.elem(2,0).imag()*bb.elem(0,0).imag(); \
  cc.elem(2,0).real() += aa.elem(2,1).real()*bb.elem(1,0).real(); \
  cc.elem(2,0).real() -= aa.elem(2,1).imag()*bb.elem(1,0).imag(); \
  cc.elem(2,0).real() += aa.elem(2,2).real()*bb.elem(2,0).real(); \
  cc.elem(2,0).real() -= aa.elem(2,2).imag()*bb.elem(2,0).imag(); \
  cc.elem(2,0).imag()  = aa.elem(2,0).real()*bb.elem(0,0).imag(); \
  cc.elem(2,0).imag() += aa.elem(2,0).imag()*bb.elem(0,0).real(); \
  cc.elem(2,0).imag() += aa.elem(2,1).real()*bb.elem(1,0).imag(); \
  cc.elem(2,0).imag() += aa.elem(2,1).imag()*bb.elem(1,0).real(); \
  cc.elem(2,0).imag() += aa.elem(2,2).real()*bb.elem(2,0).imag(); \
  cc.elem(2,0).imag() += aa.elem(2,2).imag()*bb.elem(2,0).real(); \
\
  cc.elem(0,1).real()  = aa.elem(0,0).real()*bb.elem(0,1).real(); \
  cc.elem(0,1).real() -= aa.elem(0,0).imag()*bb.elem(0,1).imag(); \
  cc.elem(0,1).real() += aa.elem(0,1).real()*bb.elem(1,1).real(); \
  cc.elem(0,1).real() -= aa.elem(0,1).imag()*bb.elem(1,1).imag(); \
  cc.elem(0,1).real() += aa.elem(0,2).real()*bb.elem(2,1).real(); \
  cc.elem(0,1).real() -= aa.elem(0,2).imag()*bb.elem(2,1).imag(); \
  cc.elem(0,1).imag()  = aa.elem(0,0).real()*bb.elem(0,1).imag(); \
  cc.elem(0,1).imag() += aa.elem(0,0).imag()*bb.elem(0,1).real(); \
  cc.elem(0,1).imag() += aa.elem(0,1).real()*bb.elem(1,1).imag(); \
  cc.elem(0,1).imag() += aa.elem(0,1).imag()*bb.elem(1,1).real(); \
  cc.elem(0,1).imag() += aa.elem(0,2).real()*bb.elem(2,1).imag(); \
  cc.elem(0,1).imag() += aa.elem(0,2).imag()*bb.elem(2,1).real(); \
  cc.elem(1,1).real()  = aa.elem(1,0).real()*bb.elem(0,1).real(); \
  cc.elem(1,1).real() -= aa.elem(1,0).imag()*bb.elem(0,1).imag(); \
  cc.elem(1,1).real() += aa.elem(1,1).real()*bb.elem(1,1).real(); \
  cc.elem(1,1).real() -= aa.elem(1,1).imag()*bb.elem(1,1).imag(); \
  cc.elem(1,1).real() += aa.elem(1,2).real()*bb.elem(2,1).real(); \
  cc.elem(1,1).real() -= aa.elem(1,2).imag()*bb.elem(2,1).imag(); \
  cc.elem(1,1).imag()  = aa.elem(1,0).real()*bb.elem(0,1).imag(); \
  cc.elem(1,1).imag() += aa.elem(1,0).imag()*bb.elem(0,1).real(); \
  cc.elem(1,1).imag() += aa.elem(1,1).real()*bb.elem(1,1).imag(); \
  cc.elem(1,1).imag() += aa.elem(1,1).imag()*bb.elem(1,1).real(); \
  cc.elem(1,1).imag() += aa.elem(1,2).real()*bb.elem(2,1).imag(); \
  cc.elem(1,1).imag() += aa.elem(1,2).imag()*bb.elem(2,1).real(); \
  cc.elem(2,1).real()  = aa.elem(2,0).real()*bb.elem(0,1).real(); \
  cc.elem(2,1).real() -= aa.elem(2,0).imag()*bb.elem(0,1).imag(); \
  cc.elem(2,1).real() += aa.elem(2,1).real()*bb.elem(1,1).real(); \
  cc.elem(2,1).real() -= aa.elem(2,1).imag()*bb.elem(1,1).imag(); \
  cc.elem(2,1).real() += aa.elem(2,2).real()*bb.elem(2,1).real(); \
  cc.elem(2,1).real() -= aa.elem(2,2).imag()*bb.elem(2,1).imag(); \
  cc.elem(2,1).imag()  = aa.elem(2,0).real()*bb.elem(0,1).imag(); \
  cc.elem(2,1).imag() += aa.elem(2,0).imag()*bb.elem(0,1).real(); \
  cc.elem(2,1).imag() += aa.elem(2,1).real()*bb.elem(1,1).imag(); \
  cc.elem(2,1).imag() += aa.elem(2,1).imag()*bb.elem(1,1).real(); \
  cc.elem(2,1).imag() += aa.elem(2,2).real()*bb.elem(2,1).imag(); \
  cc.elem(2,1).imag() += aa.elem(2,2).imag()*bb.elem(2,1).real(); \
\
  cc.elem(0,2).real()  = aa.elem(0,0).real()*bb.elem(0,2).real(); \
  cc.elem(0,2).real() -= aa.elem(0,0).imag()*bb.elem(0,2).imag(); \
  cc.elem(0,2).real() += aa.elem(0,1).real()*bb.elem(1,2).real(); \
  cc.elem(0,2).real() -= aa.elem(0,1).imag()*bb.elem(1,2).imag(); \
  cc.elem(0,2).real() += aa.elem(0,2).real()*bb.elem(2,2).real(); \
  cc.elem(0,2).real() -= aa.elem(0,2).imag()*bb.elem(2,2).imag(); \
  cc.elem(0,2).imag()  = aa.elem(0,0).real()*bb.elem(0,2).imag(); \
  cc.elem(0,2).imag() += aa.elem(0,0).imag()*bb.elem(0,2).real(); \
  cc.elem(0,2).imag() += aa.elem(0,1).real()*bb.elem(1,2).imag(); \
  cc.elem(0,2).imag() += aa.elem(0,1).imag()*bb.elem(1,2).real(); \
  cc.elem(0,2).imag() += aa.elem(0,2).real()*bb.elem(2,2).imag(); \
  cc.elem(0,2).imag() += aa.elem(0,2).imag()*bb.elem(2,2).real(); \
  cc.elem(1,2).real()  = aa.elem(1,0).real()*bb.elem(0,2).real(); \
  cc.elem(1,2).real() -= aa.elem(1,0).imag()*bb.elem(0,2).imag(); \
  cc.elem(1,2).real() += aa.elem(1,1).real()*bb.elem(1,2).real(); \
  cc.elem(1,2).real() -= aa.elem(1,1).imag()*bb.elem(1,2).imag(); \
  cc.elem(1,2).real() += aa.elem(1,2).real()*bb.elem(2,2).real(); \
  cc.elem(1,2).real() -= aa.elem(1,2).imag()*bb.elem(2,2).imag(); \
  cc.elem(1,2).imag()  = aa.elem(1,0).real()*bb.elem(0,2).imag(); \
  cc.elem(1,2).imag() += aa.elem(1,0).imag()*bb.elem(0,2).real(); \
  cc.elem(1,2).imag() += aa.elem(1,1).real()*bb.elem(1,2).imag(); \
  cc.elem(1,2).imag() += aa.elem(1,1).imag()*bb.elem(1,2).real(); \
  cc.elem(1,2).imag() += aa.elem(1,2).real()*bb.elem(2,2).imag(); \
  cc.elem(1,2).imag() += aa.elem(1,2).imag()*bb.elem(2,2).real(); \
  cc.elem(2,2).real()  = aa.elem(2,0).real()*bb.elem(0,2).real(); \
  cc.elem(2,2).real() -= aa.elem(2,0).imag()*bb.elem(0,2).imag(); \
  cc.elem(2,2).real() += aa.elem(2,1).real()*bb.elem(1,2).real(); \
  cc.elem(2,2).real() -= aa.elem(2,1).imag()*bb.elem(1,2).imag(); \
  cc.elem(2,2).real() += aa.elem(2,2).real()*bb.elem(2,2).real(); \
  cc.elem(2,2).real() -= aa.elem(2,2).imag()*bb.elem(2,2).imag(); \
  cc.elem(2,2).imag()  = aa.elem(2,0).real()*bb.elem(0,2).imag(); \
  cc.elem(2,2).imag() += aa.elem(2,0).imag()*bb.elem(0,2).real(); \
  cc.elem(2,2).imag() += aa.elem(2,1).real()*bb.elem(1,2).imag(); \
  cc.elem(2,2).imag() += aa.elem(2,1).imag()*bb.elem(1,2).real(); \
  cc.elem(2,2).imag() += aa.elem(2,2).real()*bb.elem(2,2).imag(); \
  cc.elem(2,2).imag() += aa.elem(2,2).imag()*bb.elem(2,2).real(); \
}

#endif
