#include <stdio.h>
#include <math.h>
int main()
{
       float n;
       printf("Enter the Value in Degrees:");
       while (scanf("%f",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
       float result=(3.141592*n)/180;
       float tan_value = tan(result);
      
       printf("%.2f",tan_value);
       
}
