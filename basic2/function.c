#include<stdio.h>
#include<stdlib.h>
void said();
void hi();

int main()
{
    said("rome",40);
    printf("\n yu are u lookd\n ");
    hi();
    said("mike",30);
    return 0;
}
void said(char name[],int age)
{
    printf("MR  %s",name );
    printf("%d", age);
}
void hi()
{
    printf("hiiii \n");
}