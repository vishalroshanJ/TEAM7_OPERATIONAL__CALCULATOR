#include <stdio.h>
#include<math.h>
int main()
{
  int i;
  float j=0;
  printf("no.of numbers to sub: ");
  int n;
  scanf("%d",&n);
  
 float a[n];
  for(i=0;i<n;i++)
  {
     scanf("%f",&a[i]);
      j=a[i]-j;
  }
  printf("%.1f",j);
  return 0;
}
