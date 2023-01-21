#include<stdio.h>

int main()
{
    int a,b,s=0;
    scanf("%d %d",&a ,&b);
    for(int i=0;i<b-1;i++)
    {
        s+=a;
    }
printf("%d",s);
}