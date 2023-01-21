#include<stdio.h>
#include<conio.h>

int main()

{
    int a=5,i=0,j=0;
   // printf("enter");
   // scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        if((i==0)||(j==0)||(i==a-1)||(j==a-1))
        {
            printf("*");
        }
        else if(i==j)
        {
            printf("*");
        }
        else if(i+j==a-1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
         printf("\n");
    }
return 0;
}