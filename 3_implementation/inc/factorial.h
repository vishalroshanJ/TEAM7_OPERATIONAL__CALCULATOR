#include <stdio.h>

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
       printf("factorial of %d = %d \n",n,result);
        }
    else if(n<0)
    {
        printf("factorial of %d = Not Valid \n",n);
        }
        else
        {
         printf("factorial of %d = 1 \n",n);
        }
}
