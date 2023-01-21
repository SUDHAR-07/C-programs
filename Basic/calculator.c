#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    double c,d;
    printf("enter 2 no:");
    scanf("%d %d", &a ,&b);
    printf("ans: %d \n",a+b);
    printf("enter 3st no:");
    scanf("%lf",&c);
    printf("enter 4nd no:");
    scanf("%lf",&d);
    printf("ans: %f",c+d);
    return 0;
}
