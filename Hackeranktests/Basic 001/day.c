#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
  scanf("%d",&a);
  if(a==0)
  printf("SUNDAY");
  if(a==1)
  printf("MONDAY");
  if(a==2)
  printf("TUESDAY");
  if(a==3)
  printf("WEDNESDAY");
  if(a==4)
  printf("THRUSDAY");
  if(a==5)
  printf("FRIDAY");
  if(a==6)
  printf("SATURDAY");
  if(a>6)
    printf("INVALID");
    return 0;
}
