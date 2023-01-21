#include<stdio.h>
#include<conio.h>

int main()

{
    int a,i=0,j=0;
    printf("enter");
    scanf("%d",&a);
   // printf("ihks");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("*");
        }
         printf("\n");
    }
return 0;
}