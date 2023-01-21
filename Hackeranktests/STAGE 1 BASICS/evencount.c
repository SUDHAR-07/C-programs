#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,c=0,g=0,l;
  scanf("%d",&a);
  while(a>0)
  {
    l=a%10;
    if(l%2==0)
    {
      c=c+1;
    }
    a=a/10;
  }
  printf("%d",c);
    return 0;
}
