#include <stdio.h>

//#include "multiplication.h"

void multiplication()
{
  int i;
  float j=1;
  printf("enter the number of elements to mul: ");
  int n;
  scanf("%d",&n);
  printf("please enter the numbers one by one: \n",n);
  float a[n];
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
      j=j*a[i];
  }
  printf("product of numbers is: %.1f",j);
}
