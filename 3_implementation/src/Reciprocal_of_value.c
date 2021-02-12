#include <stdio.h>
#include<math.h>
#include "Reciprocal_of_value"
void Reciprocal_of_value()
{
   
    double num, result;
    printf("1/x-->Enter x value");
    scanf("%lf",&num);
    result =1/num;
    printf("1/%lf = %.2f",num, result);

}
