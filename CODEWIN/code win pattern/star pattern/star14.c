#include <stdio.h>

int main()
{
    int n, i = 0, k = 0;
    scanf("%d", &n);
   printf("Inverted Mirror Right traingle \n");
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            if (i<=k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}