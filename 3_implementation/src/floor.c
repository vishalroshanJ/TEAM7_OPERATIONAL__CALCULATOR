#include <stdio.h>
#include "floorval.h"
void floorval()
{
float n,result;
printf("Enter the number:");
while (scanf("%f",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
result=floor(n);
printf("floor of %.2f = %.2f \n",n,result);
}
