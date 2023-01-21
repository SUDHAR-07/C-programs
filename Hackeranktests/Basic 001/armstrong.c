#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,c,s,f=0,g,r;
    scanf("%d%n",&a,&c);
    g=a;
    while(a>0)
    {
      r=a%10;
      s=pow(r,c);
      f=f+s;
      a=a/10;
    }
    if(g==f)
      printf("Yes");
    else
      printf("No");
    return 0;
}
