#include <stdio.h>
int main()
{
    int i, j = 1, n;
    printf("enter no");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d.\t", i);
        for(j=i;j<i+1 && j<=n;j++)
        {
            printf("%d \n",j);
            continue;
        } 
    }
}