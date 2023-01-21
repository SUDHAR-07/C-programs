#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t, j;
    printf("enter no");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even numbers are \t");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d", a[i]);
        }
    }
    printf("\n odd numbers are \t");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d", a[i]);
        }
    }
    printf("\n Reversing digit \t");
    for (i = n-1; i >=0; i--)
    {
        printf("%d", a[i]);
    }
    int b[n];
     printf("\n storing Reversing digit \t");
    for (i = n-1,j=0; i >=0,j<n; i--,j++)
    {
        b[j]=a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
    printf("\n Desending order \t");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
               // printf("t \n");
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
     printf("\n Asending order \t");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
               // printf("t \n");
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
