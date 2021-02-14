#include<stdio.h>
void subtraction()
{
  int i;
  float j=0;
  printf("enter the number of elements to subtract: ");
  int n;
  scanf("%d",&n);
  printf("please enter the numbers one by one: \n",n);
  
 float a[n];
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
      j=a[i]-j;
  }
  printf("difference of num= %.1f",j);
}
