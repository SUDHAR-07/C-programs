#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int a,i,t,f,j;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++)
    {
      scanf("%d",&s[i]);
    }
    for(i=0;i<a;i++)
    {
      for(j=i+1;j<a;j++)
    {
      if(s[i]>s[j])
      { 
        t=s[i];
        s[i]=s[j];
        s[j]=t;
      }
    }
    }
     for(i=0;i<a;i++)
    {
      printf("%d",s[i]);
    }
    f=s[a-1]/s[0];
    printf("\n%d",f);
    return 0;
}

