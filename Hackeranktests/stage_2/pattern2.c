#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a;
  scanf("%d",&a);
  for(int i = 0; i < a; i++)
  {
    for(int j = 0; j < a; j++)
    {
      if(i == 0 || j == 0 || i == a-1 || j == a-1)
      {
        printf("*");
      }
      else 
      {
        printf(" ");
      }
    }
    printf("\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
