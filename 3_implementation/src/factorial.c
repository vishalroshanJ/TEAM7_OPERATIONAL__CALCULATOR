#include <stdio.h>
#include "factorial.h"
void factorial()
{
    int i,n,result=1;
printf("Enter the number:");
scanf("%d",&n);
    if (n>=1)
    {
        for(i=1;i<=n;i++)
        {
    result=result*i;
        }
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
