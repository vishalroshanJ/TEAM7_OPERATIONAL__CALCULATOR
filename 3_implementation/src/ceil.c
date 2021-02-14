#include <stdio.h>
#include "ceilval.h"
void ceilval()
{
float n,result;
printf("Enter the number:");
while (scanf("%f",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
result=ceil(n);
printf("Ceil of %.2f = %.2f \n",n,result);
}
