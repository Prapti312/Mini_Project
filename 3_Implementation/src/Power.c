//#include "conversion.h"
#include <stdio.h>
long int Power(int base,long int exponent)
{
long int result=1;
for (exponent; exponent>0; exponent--)
{
result = result * base;
}
return result;
}