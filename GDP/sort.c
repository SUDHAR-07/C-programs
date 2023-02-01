#include<stdio.h>

int main()
{
    int temp;
    char a[10]={'w','x','g','a','j','c','q','u','l','o'};
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
    for(int h=0;h<10;h++)
    {
        printf("%c",a[h]);
    }
}
