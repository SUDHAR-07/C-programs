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
        s = rem;
        printf("%d ",s);
        a = a / 10; 
    }
    return s;
}
int main()
{
    int a;
    scanf("%d", &a);
    sum(a);
    return 0;
}
