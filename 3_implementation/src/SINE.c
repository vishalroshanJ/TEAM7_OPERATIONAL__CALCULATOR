#include <stdio.h>
#include <math.h>
#include "sine.h"

void sine()
int main()
{
  double sinValue, n;
  
  printf("Enter the Value to calculate Sine :  ");
  
  scanf("%lf", &n);
  
  sinValue = sin(n);
  
  printf("\n The Sine value of %lf = %f ", n, sinValue);
  
  return 0;
}


