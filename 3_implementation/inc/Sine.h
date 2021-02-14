#include <stdio.h>
#include <math.h>
#include "sin.h"

void sin()
{
  float n;
       printf("Enter the Value in Degrees:");
       while (scanf("%f",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
       float result=(3.141592*n)/180;
       float sin_value = sin(result);
      
       printf("%.2f",sin_value);     
}
