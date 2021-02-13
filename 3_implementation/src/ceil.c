#include <stdio.h>
#include "ceilval.h"
void ceilval()
{
float n,result;
printf("Enter the number:");
scanf("%f",&n);
result=ceil(n);
printf("Ceil of %f = %f \n",n,result);
}
