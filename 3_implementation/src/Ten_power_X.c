#include <stdio.h>
#include<math.h>
#include "Ten_power_X.h"
int Ten_power_X()
{
   
    double num, result;
    printf("10^x-->Enter x value");
    scanf("%lf",&num);
    result = pow(10, num);
    printf("10^%d = %.2f",num, result);

   
}
