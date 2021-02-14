#include <stdio.h>
#include <math.h>
#include "tan.h"

void tan()
{
       
       float n;
       scanf("%f",&n);
       float result=(3.141592*n)/180;
       float tan_value = tan(result);
      
       printf("%f",tan_value);
       
}
