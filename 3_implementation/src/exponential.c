#include <stdio.h>
#include "exponential.h"
void expval()
{
float n,result;
printf("Enter the number:");
scanf("%f",&n);
result=exp(n);
printf("exponential of %f = %f \n",n,result);
}
