#include <stdio.h>
#include<math.h>

void xy()
{
   
    double num1,num2, result;
    printf("Enter Base value");
    scanf("%lf",&num1);
    printf("Enter power value");
    scanf("%lf",&num2);
    result = pow(num1, num2);
    printf("%lf^%lf = %.2f",num1,num2, result);

   
}
