#include <stdio.h>
#include <string.h>
//#include "conversion.h"
#include<stdlib.h>

long int Decimal_to_Octal(long int dec)
{
    int remainder[50],x=0,length=0;
    do
    {
        remainder[x]=dec%8;
        dec=dec/8;
        x++;
        length++;
    }
    while(dec!=0);

   long int i;

    long int answer=remainder[length-1];

    for(i=length-2; i>=0 ; i--){
    	answer=(answer*10) + remainder[i];
	}
    return answer;
}