#include <stdio.h>
#include "exponential"
void exp()
{
float n,result;
printf("Enter the number:");
scanf("%f",&n);
result=exp(n);
printf("exponential of %f = %f \n",n,result);
}
