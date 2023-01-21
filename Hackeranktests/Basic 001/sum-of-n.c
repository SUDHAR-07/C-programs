#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   long int a,b=0;
  scanf("%lu",&a);
  for(int i=0;i<a+1;i++)
  {
    b=b+i;
  }
  printf("%lu",b);
    return 0;
}