#include <stdio.h>
#include "addition.h"

void addition()
{
    int i,n,j=0;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      j=j+a[i];
  }
    printf("Sum of %d numbers = %d \n",n,total);
    
}

