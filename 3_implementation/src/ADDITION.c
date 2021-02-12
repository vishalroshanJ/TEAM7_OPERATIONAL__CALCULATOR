#include <stdio.h>

int main()
{
  int i;
  float j=0;
  printf("no.of numbers to add");
  int n;
  scanf("%d",&n);
  
 float a[n];
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
      j=j+a[i];
  }
  printf("%.2f",j);
  return 0;
}
