#include<stdio.h>
#include "subtraction.h"
void subtraction()
{
  int i,n;
float j=0;
    printf("\nEnter the number of elements you want to subtract:");
    while (scanf("%d",&n)==0)
{
printf("Invalid input. Please Vaild Input: ");
scanf("%*s");
}
    printf("Please enter %d numbers one by one: \n",n);
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
      j=j-a;
  }
    printf("Sum of numbers = %0.2f \n",j);
    
}
