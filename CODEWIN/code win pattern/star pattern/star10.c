
#include <stdio.h>

int main()
{
    int n, i = 0, k = 0;
    scanf("%d", &n);
   printf("Mirror Right traingle \n");
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            if (i+k >= n-1)
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
    return 0;
}