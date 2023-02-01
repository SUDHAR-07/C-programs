#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,i,k,m,t=0,g=0;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("enter no of elements");
   
    scanf("%d",&a);
    int s[a];
    for(i=0; a>0 && i<a && a<10;i++)
    {
     printf("enter elements");
     scanf("%d",&s[i]);
    }
    printf("enter any 2 no from ur list");
    scanf("%d",&k);
    scanf("%d",&m);
    for(i=0;i<a && a<10;i++)
    {
     if(s[i]==k)
     {
       t=i;
     }
     else if(s[i]==m)
     {
       g=i;
     }
     else
     {
       continue;
     } 
    }
    printf("%d %d",t,g);
    for(i=t+1;i<g;i++)
    {
      printf("\n%d",s[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


