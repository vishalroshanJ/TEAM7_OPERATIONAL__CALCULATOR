#include <stdio.h>
#include <math.h>
//#include "sin.h"

void sinin()
{
  double sinValue, n;
  printf("Enter the Value to calculate Sine :  ");
  scanf("%lf", &n);
  sinValue = sin(n);
  printf("\n The Sine value of %lf = %f ", n, sinValue);
}


