#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int n,min;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  for(int j=0;j<n;j++)
  {
    if(min>a[j])
    {
      min=a[j];
    }
  }
  // if(t>a[0])
  // {
  //   t=a[0];
  // }
  printf("%d",min);
    return 0;
}
