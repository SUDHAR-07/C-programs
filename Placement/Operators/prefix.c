#include<stdio.h>

int main()
{
    int i,a=5;
    //i=++a + ++a / 6;
    i= ++a + ++a;
    printf("%d %d",i,a);
    return 0;
}