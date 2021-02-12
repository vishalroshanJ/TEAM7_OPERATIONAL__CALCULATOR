#include<stdio.h>
#include "modulus.h"
void modulus()
{
  int i;
  int n,y;
  scanf("%d %d",&n,&y);
  printf("please enter the elements of mod: ",n,y);
  i=n%y;
 
  printf("remainder of mod is: %d",i);
}
