#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    printf("%d",a[2]);
    a[1]=0;
    printf("%d \n ",a[1]);
    printf("enter name");
    char b[20];
    fgets(b, 20,stdin);
    printf("%c",b);
    printf("%s",b);
    return 0;
}