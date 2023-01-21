#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,t,c=0,k=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&t);
   for(int i=0;i<n;i++)
  {
     for(int j=i+1;j<n;j++)
     {
       c=a[i]+a[j];
     if(c==t)
    {
       k=k+1;
      printf("%d,%d",a[i],a[j]);
       break;
    }
     c=0;
     }    
  }
  if(k==0)
  {
    printf("-1");
  }
    return 0;
}