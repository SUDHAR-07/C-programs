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
      for(j=0;j<a;j++)
      {
         if((i==0)||(j==0)||(i==a-1)||(j==a-1))
        {
          printf("*");
        }
        else if((i==j)||(i+j==a-1))
        {
        printf("*");
        }
        else
        {
        printf(" ");
        }
        printf(" ");
      }
      printf("\n");
    }
    
    return 0;
}