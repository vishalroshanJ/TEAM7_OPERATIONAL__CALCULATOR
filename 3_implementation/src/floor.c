#include <stdio.h>
#include "floor"
void floor()
{
float n,result;
printf("Enter the number:");
scanf("%f",&n);
result=floor(n);
printf("floor of %f = %f \n",n,result);
}