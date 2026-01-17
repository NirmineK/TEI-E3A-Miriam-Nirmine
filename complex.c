#include "file.h"


Complex makecomplex(float re, float im)
{
Complex z;
z.re=re;
z.im=im;
return z;
}

//void affichecomplexe

Complex makecomplex(float re, float im);
//fonctions sur les complexes
Complex cadd(Complex a, Complex b)
{
Complex z;

z.re = a.re + b.re;
z.im = a.im + b.im;
return z;
}