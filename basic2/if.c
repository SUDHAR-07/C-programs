#include<stdio.h>
#include<stdlib.h>

int max (int a, int b,int d)
{
    int c;
    if(a>b && a>d)
    {
        c=a;
    }else if (b>a && b>d)
    {
    c=b;
    }
    else 
    {
        c=d;
    }
    return c;
}

int main()
{
    printf("%d", max(20,2,200));
    if (1<2 || 1==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    if(!(4>2))
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
    return 0;
}