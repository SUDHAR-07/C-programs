#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter rows");
    scanf("%d", &n);
    printf("right angle \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n reverse angle \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf(" \nright angle with letters \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("%c", i + 65);
            }
        }
        printf("\n");
    }
    printf("\nright angle without  aschii \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
            {
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
}
