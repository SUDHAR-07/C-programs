#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int a,b=1;
  scanf("%d",&a);
  for(int i=1;i<a+1;i++)
  {
    b=b*i;
  }
  printf("%d",b);
    return 0;
}
