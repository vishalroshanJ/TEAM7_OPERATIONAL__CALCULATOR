#include <stdio.h>
#include<math.h>
#include "logFuntion.h"
void logFuntion()
{
 double num, result;
    printf("log(x)-->Enter x value :");
    while (scanf("%lf",&num)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
    result = log(num);
    printf("log(%.1f) =%.2f", num, result);   
}
