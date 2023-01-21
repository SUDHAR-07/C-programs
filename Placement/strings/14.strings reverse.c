#include <stdio.h>

int main()
{
    int n,i=0,j=0,d=0;
    printf("enter no of elements");
    scanf("%d", &n);
    char a[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%s", &a[j]);
    }
    // printf("%s \n %s  \n %c", a[0], a[1], a[0][2]);
    // printf("%c \n %c", a[0][1],a[1][2]);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != '\0')
        {
            d += 1;
        }
    }
    for (int i = d - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
    //printf("%s %s", c[0], c[1]);
}