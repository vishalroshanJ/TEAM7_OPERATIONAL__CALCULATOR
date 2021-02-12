#include <stdio.h>
#include<math.h>
#include "Exponential"
void Exponential()
{
   
    double num, result;
    printf("e^x-->Enter x value");
    scanf("%lf",&num);
    result =pow(2.718281828,num);
    printf("e^%lf = %f",num, result);

}
