#include <stdio.h>
#include<math.h>
#include "squareroot.h"
void squareroot()
{
    float num, result;
    printf("Enter root value:");
   
   while (scanf("%f",&num)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
   result = sqrt(num);
    printf("squreroot %f = %.2f",num, result);
}
