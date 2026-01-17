#include "file.h"


Circuit test1()
{

Circuit c;

c.nel=2;
c.t=(Quadripole*)malloc(c.nel*sizeof(Quadripole));

c.t[0].composant ='R';
c.t[0].pos ='S';

}