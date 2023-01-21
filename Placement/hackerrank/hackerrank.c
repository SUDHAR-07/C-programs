#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int u,h=0,m,o=0,t,w=0;
    int i,j;
  //Write your code here.
  for (int i=1;i<=n ;i++ ) 
  {
      for (int j=i+1; j<=n; j++)
      {
          u=i&j;
          if (u>h && u<k) 
          {
           h=u;   
          } 
      }      
    }
    printf("%d\n",h);
    for (int i=1;i<=n ;i++ ) 
  {
      for (int j=i+1; j<=n; j++)
      {
          m=i|j;
          if (m>o && m<k) 
          {
           o=m;   
          } 
      }      
    }
    printf("%d\n",o);
    for (int i=1;i<=n ;i++ ) 
  {
      for (int j=i+1; j<=n; j++)
      {
          t=i^j;
          if (t>w && t<k) 
          {
           w=t;   
          } 
      }      
    }
    printf("%d\n",w);
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
