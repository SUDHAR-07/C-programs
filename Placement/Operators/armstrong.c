#include <stdio.h>
#include <conio.h>
#include <math.h>

int ar(int a, int n)
{
    int strong, rm, c = 0;
    rm = a;
    printf("%d %d \n", a, n);
    while (a > 0)
    {
        strong = a % 10;
        c += pow(strong,n);
      //  c += strong * strong * strong;
        a = a / 10;
    }
    printf("%d", c);
    if (rm == c)
    {
        printf("\n Given No is ARMSTRONG number");
    }
    else
    {
        printf(" \n given no is not a ARMSTRONG number");
    }
}
void main()
{
    int a, b, m;
    printf("enter a no:");
    scanf("%d", &a);
    b = a;
    int s = 0, arm, n = 0;
    while (a != 0)
    {
        s = a % 10;
        a = a / 10;
        n = n + 1;
    }
    ar(b, n);
    //printf("The number of digits is %d",n);
    //printf("The number is %d",b);
    
}
