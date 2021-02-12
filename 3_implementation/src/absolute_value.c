#include <stdio.h>
#include "absolute_value"
void abs()
{
float n,result;
printf("Enter the number:");
scanf("%f",&n);
result=abs(n);
printf("Absolute value of %f = %f \n",n,result);
}
