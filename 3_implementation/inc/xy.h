#include <stdio.h>
#include<math.h>
#include "xy.h"
void xy()
{
   double num1,num2, result;
    printf("Enter Base value:");
    while (scanf("%lf",&num1)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
    printf("Enter power value:");
    while (scanf("%lf",&num2)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
    result = pow(num1, num2);
    printf("%.2lf^%.2lf = %.2f",num1,num2, result);
}
