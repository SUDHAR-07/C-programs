#include<stdio.h>

int main()
{
    int a=5,b=6,x=10,y=20,z;
    printf(" swaping without 3rd variable");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    printf("\n swaping with 3rd variable");
    z=x;
    x=y;
    y=z;
    printf("%d %d",x,y);
}