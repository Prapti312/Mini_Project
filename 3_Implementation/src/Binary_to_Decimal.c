#include <stdio.h>
#include <math.h>
#include <string.h>
#include "conversion.h"


long int Binary_to_Decimal(long int bin)
{
    int remainder,summation=0,x=0;
    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*pow(2,x);
        x++;
    }

    return summation;
}