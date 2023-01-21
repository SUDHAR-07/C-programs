#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a)
{
    int s = 0, rem;
    while (a != 0)
    {
        rem = a % 10; 
        s = s * 10 + rem; 
        a = a / 10;
    }
    return s;
}
int main()
{
    int a,b;
  //  printf("enter number");
    scanf("%d", &a);
    b=sum(a);
    if(a==b)
      printf("Yes");
    else
      printf("No");
    return 0;
}