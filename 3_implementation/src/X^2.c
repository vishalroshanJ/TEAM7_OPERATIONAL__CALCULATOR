#include <stdio.h>
#include<math.h>
#include "X_p.h"
void X_p()
{
   
    double num, result;
    printf("x^2-->Enter x value");
    scanf("%lf",&num);
    result = pow(num, 2);
    printf("x^2 = %.2f", result);

    
}
