#include <stdio.h>
#include<math.h>
//#include "sqrtin.h"
void sqrtin()
{
   
    double num, result;
    printf("Enter root value");
     while (scanf("%lf",&num)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
    result = sqrt(num);
    printf("squreroot %lf = %lf",num, result);

}
