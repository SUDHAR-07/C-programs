#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, n, i, odd = 1,w;
    printf("enter starting no");
    scanf("%d", &i);
    printf("enter ending no");
    scanf("%d",&n);
    for (int i; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("even %d \n", i);
        }
    }
    printf("Odd numbers are \n");
    while (i <= n)
    {
        if (i % 2 != 0)
        
        {
            printf("odd no are %d \n", i);
        }
        i++;
    }
}