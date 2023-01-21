#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
      if(a%i==0)
      {
        b=b+i;
      }
    }
    printf("%d",b);
    return 0;
}
