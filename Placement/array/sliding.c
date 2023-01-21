#include <stdio.h>

int main()
{
    int n, k, max, j,i, c = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < n-k-1; i++)
    {
        for (j = i; j < i + k - 1; j++)
        {
            if (a[j] >= a[j + 1])
            {
                max = a[j];
            }
            else
            {
                max = a[j + 1];
            }
           //  printf("\n %d  %d %d \n",max,a[j],a[j+1]);
        }
        printf(" %d", max);
    }
  //  printf("\n I value is %d",i);
   // printf("\n J value is %d",j);
    return 0;
}