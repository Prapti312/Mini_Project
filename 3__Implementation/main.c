#include <stdio.h>
#include <math.h>
#include<string.h>
#include "conversion.h"
#include<stdlib.h>

int main()
{
    int operations,numbers=1,checking;
    long int b,o,d;
    char h[100];
    int x,y,spacebar;

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while(numbers!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&operations);

        switch(operations)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%ld IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    checking=checking/10;
                }

                printf("\nEquivalent Decimal Number : %ld",Binary_to_Decimal(b)); break;

            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%ld IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    checking=checking/10;
                }

                printf("\nEquivalent Octal Number : %ld ",Binary_to_Octal(b)); break;

            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&b);

                checking=b;

                while(checking!=0)
                {
                    numbers=checking%10;
                    if(numbers>1)
                    {
                        printf("\n%ld IS NOT BINARY NUMBER.\n",b);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    checking=checking/10;
                }
                char* a;
                a=Binary_to_Hexadecimal(b);

                printf("\nEquivalent Hexadecimal Number is : %s", a); break;

            case 4:
                printf("\n***DECIMAL TO BINARY***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&d);
                printf("\nEquivalent Binary Number :%ld ",Decimal_to_Binary(d)); break;

            case 5:
                printf("\n***DECIMAL TO OCTAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&d);
                printf("\nEquivalent Octal Number : %ld",Decimal_to_Octal(d)); break;

            case 6:
                printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&d);
                char* e;
                e=Decimal_to_Hexadecimal(d);
                printf("\nEquivalent Hexadecimal Number : %s",e); break;

            default:
                printf("\n***INVALID NUMBER***\n");
                break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&numbers);

    }
    spacebar = 3+35;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar--;
            for( y=1;y<=2*x-1;y++)
            {
                printf("*");
            }
            printf("\n");
        }
        spacebar = 37;
        for( x=1;x<=3;x++)
        {
            for( y=1;y<=spacebar;y++)
            {
                printf(" ");
            }
            spacebar++;
            for( y=1;y<=2*(3-x)-1;y++)
            {
                printf("*");

            }

            printf("\n");

        }

}
