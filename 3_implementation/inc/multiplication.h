 #include <stdio.h>

#include "multiplication.h"

void multiplication()
{
  int i;
  float j=1;
  printf("enter the number of elements to mul: ");
  int n;
  while (scanf("%d",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
  printf("please enter the numbers one by one: \n",n);
  float a;
  for(i=0;i<n;i++)
  {
     while (scanf("%f",&a)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
} 
      j=j*a;
  }
  printf("product of numbers is: %.2f",j);
}
