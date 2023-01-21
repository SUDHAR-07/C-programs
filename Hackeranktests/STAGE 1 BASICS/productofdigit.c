#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m=1,k;
    scanf("%d",&n);
    while(n>0)
    {
      k=n%10;
      m=m*k;
      n=n/10;
    }
   printf("%d",m);
    return 0;
}
