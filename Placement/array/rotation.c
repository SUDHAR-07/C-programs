#include<stdio.h>

void main()
{
    int n,t,r;
    printf("how many elements");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter elements");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
   // printf("1st rotation");
    printf("\n how many rotation");
    scanf("%d",&r);
    for(int j=0;j<r;j++)
    {
    for(int i=0;i<n;i++)
    {
        t=a[n-1];
        a[n-1]=a[i];
        a[i]=t; 
    }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}