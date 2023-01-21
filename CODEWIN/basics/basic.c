#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=i;j<i+j;j++)
    {
        printf("%d",j);
    }
    printf("\n");
    }
}