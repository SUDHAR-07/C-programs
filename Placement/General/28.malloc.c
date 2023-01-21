#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *a;
    printf("enter how many no");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(n));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }

    return 0;
}