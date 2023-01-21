#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,r,s=0,l;
    scanf("%d",&a);
    while(a>0)
    {
      r=a%10;
      s=s*10+r;
      a=a/10;
    }
    while(s>0)
    {
      l=s%10;
      if((l==2)||(l==3)||(l==5)||(l==7))
        printf("%d ",l);
      s=s/10;
    }
return 0;
}
