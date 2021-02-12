#include <stdio.h>
#include <math.h>
#include "cos.h"
void cos()

int main()
{
  double  n,val,cosvalue;

  printf("Enter the Value to calculate cos :  ");
  
  scanf("%lf", &n);
  
  val = 3.14 / 180.0;
  cosvalue = cos( n*val );
  
  printf("\n The Sine value of %lf = %f ", n, cosvalue);
  
  return 0;
}

