#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,t,m,n;
    printf("enter no");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf(" %d", &a[i]);
    }
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
        printf("%d \n", a[i]);
    }
    // 0 1 2 3 4 5
    // 1 3 4 7 8 9
    printf("Enter Nth of max");
    scanf("%d",&m);
    m=n-m;
    printf("%d",a[m]);
    return 0;
}