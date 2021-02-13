#include <stdio.h>
#include<math.h>
#include "log_Funtion.h"
void log_Funtion()
{
   
    double num, result;
    printf("log(x)-->Enter x value");
    scanf("%lf",&num);
    result = log(num);
    printf("log(%.1f) = %.2f", num, result);

    
}
