#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int a,i,j;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
    printf(" ");
    for(j=0;j<a;j++)
    {
      if((i+j)>=(a-1))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    for(j=0;j<a-1;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
        }
    printf("\n");
  }
  return 0;
}