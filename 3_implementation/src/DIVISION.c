#include <stdio.h>
#include "division.h"
{
  int i;
  float j=1;
  printf("enter the number of elements to div: ");
  int n;
  scanf("%d",&n);
  printf("please enter the elements one by one: \n",n);
 float a[n];
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
     if(i==0)
     {
         j=a[i];
     }
     else
      j=j/a[i];
  }
  printf("quotient of the elements is: %f",j);
}
