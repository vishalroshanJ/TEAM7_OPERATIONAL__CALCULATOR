#include <stdio.h>
#include "factorial"
void factorial()
{
printf("Enter the number:");
scanf("%d",&n);
    if (n>=1)
    {
       printf("factorial of %f = %f \n",n,result);
        }
    else if(n<0)
    {
        printf("factorial of %f = Not Valid \n",n);
        }
        else
        {
         printf("factorial of %f = 1 \n",n);
        }
}
