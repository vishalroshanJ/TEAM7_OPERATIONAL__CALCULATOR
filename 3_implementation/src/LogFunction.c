#include <stdio.h>
#include "log_Function"
void logfuntion()
{
   
    double num, result;
    printf("log(x)-->Enter x value");
    scanf("%lf",&num);
    result = log(num);
    printf("log(%.1f) = %.2f", num, result);

    
}
