#include <stdio.h>
#include <math.h>
#include <string.h>
#include "conversion.h"
long int Binary_to_Octal(long int bin)
{
    int x=0,remainder,sum=0,remaining[100],length=0;

    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        sum=sum+remainder*pow(2,x);
        x++;
    }
    x=0;
    while(sum!=0)
    {
        remaining[x]=sum%8;
        sum=sum/8;
        x++;
        length++;
    }

    long long int i;

    long long int answer=remaining[length-1];

    for(i=length-2; i>=0 ; i--){
    	answer=(answer*10) + remaining[i];
	}
    return answer;
}