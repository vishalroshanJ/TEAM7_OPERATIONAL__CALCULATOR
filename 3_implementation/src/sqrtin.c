#include <stdio.h>
#include<math.h>
#include "sqrtin.h"
void  sqrtin()
{
   
    double num, result;
    printf("Enter root value");
    scanf("%lf",&num);
    result = sqrt(num);
    printf("squreroot %lf = %.2f",num, result);

}
