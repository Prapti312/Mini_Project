#include <stdio.h>
#include <string.h>
//#include "conversion.h"
#include<stdlib.h>
extern long int Power(int a, long int b);

char* Binary_to_Hexadecimal(long int bin)
{
    int x=0,summation=0,remaining[100],length=0;
    while(bin!=0)
    {
        int remainder;
        remainder=bin%10;
        bin=bin/10;
        summation=summation+remainder*Power(2,x);
        x++;
    }
    x=0;
    while(summation!=0)
    {
        remaining[x]=summation%16;
        summation=summation/16;
        x++;
        length++;
    }

    char *str;
    str = (char*)malloc(100);
    int i;

    for(i=0,x=length-1;x>=0;x--)
    {
        switch(remaining[x])
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
                str[i++]=(remaining[x] + '0'); break;
        }

    }
    str[i]='\0';
    return str;
}