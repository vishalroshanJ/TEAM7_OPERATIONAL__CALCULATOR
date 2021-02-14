#include <stdio.h>
#include<math.h>
#include "sqrtin.h"
void sqrtin()
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
