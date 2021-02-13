#include <stdio.h>
#include <math.h>

void cos()
  
{
  double  n,val,cosvalue;
  printf("Enter the Value to calculate cos :  ");
  scanf("%lf", &n);
  
  val = 3.14 / 180.0;
  cosvalue = cos( n*val );
  
  printf("\n The cos value of %lf = %f ", n, cosvalue);
 
}

