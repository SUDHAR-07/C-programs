#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,i,k,m,t=0,g=0;
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
       break;
     }
    }
    for(i=t;i<a && a<10;i++)
    {
     if(s[i]==m)
     {
       g=i;
       break;
     }
    }
     printf("%d %d \n",t,g);
    if(t==g)
    {
     for(i=t+a-1;i<a;i++)
    {
      if(s[i]==m)
      {
          printf("found is %d index at %d", s[i],i);
          g=i;
          break;
      }
    }
    }
    printf("after equal %d %d \n",t,g);
    if(g<t)
    {
    for(i=g+1;i<t;i++)
    {
      printf("\n%d",s[i]);
    }
    }
    else
    {
        for(i=t+1;i<g;i++)
        {
            printf("\n%d",s[i]);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

