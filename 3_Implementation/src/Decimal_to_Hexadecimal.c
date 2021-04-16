#include <stdio.h>
#include <string.h>
//#include "conversion.h"
#include<stdlib.h>

char* Decimal_to_Hexadecimal(long int dec)
{
    int remainder[50],x=0,length=0;
    do
    {
        remainder[x]=dec%16;
        dec=dec/16;
        x++;
        length++;
    }
    while(dec!=0);


    char *str;
    str = (char*)malloc(100);
    int i;

    for(i=0,x=length-1;x>=0;x--)
    {
        switch(remainder[x])
        {
            case 10:
                str[i++]='A'; break;

            case 11:
                str[i++]='B'; break;

            case 12:
                str[i++]='C'; break;

            case 13:
                str[i++]='D'; break;

            case 14:
                str[i++]='E'; break;

            case 15:
                str[i++]='F'; break;

            default:
                str[i++]=(remainder[x] + '0'); break;
        }

    }
    str[i]='\0';
    return str;
}