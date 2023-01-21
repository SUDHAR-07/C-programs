#include <stdio.h>

int main()
{
    int i, j, k,temp;
    printf("enter N");
    scanf("%d",&k);
    for (i = 1; i <= k; i++)
    {
        temp=i;
        for (j = i; j <=k/10; j=j+10)
        {
           printf("%d \n", i);
            printf("%d \t", j);
            temp+=10;
        }
    }
    return 0;
}