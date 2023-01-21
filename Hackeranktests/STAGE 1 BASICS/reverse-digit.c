#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int a,f=0,k=0;
  scanf("%d",&a);
  while(a>0)
  {
    k=a%10;
    if(k%2==0)
    {
    f=f*10+k;
    }
    a=a/10;
  }
  printf("%d",f);
    return 0;
}
