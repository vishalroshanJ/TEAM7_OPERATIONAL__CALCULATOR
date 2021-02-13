#include <stdio.h>
#include<math.h>
#include "logFunction.h"
void logFunction()
{
   
    double num, result;
    printf("log(x)-->Enter x value");
    scanf("%lf",&num);
    result = log(num);
    printf("log(%.1f) = do_addition()%.2f", num, result);

    
}
