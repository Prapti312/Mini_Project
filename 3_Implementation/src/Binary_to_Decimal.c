#include <stdio.h>
#include <string.h>
//#include "conversion.h"
extern long int Power(int a, long int b);

long int Binary_to_Decimal(long int bin)
{
    int summation=0,x=0;
    while(bin!=0)
    {
        int remainder;
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*Power(2,x);
        x++;
    }
    return summation;
}