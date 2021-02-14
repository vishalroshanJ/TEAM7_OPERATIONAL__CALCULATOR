#include <stdio.h>
#include "division.h"
void division()
{
  int i;
  float j=1;
  printf("enter the number of elements to div: ");
  int n;
    while (scanf("%d",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
  printf("please enter the elements one by one: \n",n);
 float a;
  for(i=0;i<n;i++)
  {
       while (scanf("%f",&a)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
     if(i==0)
     {
         j=a;
     }
     else
      j=j/a;
  }
  printf("quotient of the elements is: %f",j);
}
