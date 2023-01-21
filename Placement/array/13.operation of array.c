#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t = 0, j, m,k,l;
    printf("enter no");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter elements");
        scanf(" %d", &a[i]);
    }
    printf("enter array 2 no");
    scanf("%d", &m);
    int b[m];
    for (i = 0; i < m; i++)
    {
        printf("enter elements");
        scanf(" %d", &b[i]);
    }
    t = m + n;
    int w[t];
    for (i = 0; i < n; i++)
    {
        w[i] = a[i];
    }    
    for (j = 0; j < m ; j++)
        {
            w[i+j] = b[j];
        }
    
    for (i = 0; i < t; i++)
    {
        printf("%d \n", w[i]);
    }
    printf("\n Desending order \t");
    for (i = 0; i < t; i++)
    {
        for (j = i + 1; j < t; j++)
        {
            if (w[i] < w[j])
            {
               // printf("t \n");
                l = w[i];
                w[i] = w[j];
                w[j] = l;
            }
        }
    }
     for (i = 0; i < t; i++)
    {
        printf("%d", w[i]);
    }
      printf("\n Asending order \t");
    for (i = 0; i < t; i++)
    {
        for (j = i + 1; j < t; j++)
        {
            if (w[i] > w[j])
            {
               // printf("t \n");
                l = w[i];
                w[i] = w[j];
                w[j] = l;
            }
        }
    }
     for (i = 0; i < t; i++)
    {
        printf("%d", w[i]);
    }
    // for (i = n - 1; i >= 0; i--)
    // {
    //     printf("%d", a[i]);
    // }
}
