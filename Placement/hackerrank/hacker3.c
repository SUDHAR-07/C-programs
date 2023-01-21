#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     int a,i,k,m,t=0,g=0;
   //printf("enter no of elements");
   scanf("%d",&a);
   int s[a];
   for(i=0; i<a && a<10;i++)
    {
     //printf("enter elements");
     scanf("%d",&s[i]);
    }
      for(i=0;i<a;i++)
    {
      if(s[i] % 2 == 0)
      {
        t++;
      }
    }
    printf("%d",t);
    return 0;
}