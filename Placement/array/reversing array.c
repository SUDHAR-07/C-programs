#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t, j;
    printf("enter no");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     for(int i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t; 
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}