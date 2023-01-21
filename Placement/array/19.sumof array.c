#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t = 0, j;
    printf("enter no");
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        t = t + a[i];
    }
    printf("\n %d", t);
    printf("\n copy of array");
    
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf(" \n %d", b[i]);
    }
}
