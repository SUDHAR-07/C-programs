#include<stdlib.h>
#include<stdio.h>

int main()
{
    double a,b;
    char op;
    printf("enter operator");
    scanf("%c", &op);
    printf("enter a no");
    scanf("%lf", &a);
    printf("enter a no;");
    scanf("%lf", &b);

    if(op == '+')
    {
        printf("%f",a+b);
    } else if(op=='-')
    {
        printf("%f",a-b);
    }else if(op=='*')
    {
        printf("%f",a*b);
    }
    else if(op=='/')
    {
        printf("%f",a/b);
    }
    else
    {
        printf("invalid operator");
    }
    return 0;
}