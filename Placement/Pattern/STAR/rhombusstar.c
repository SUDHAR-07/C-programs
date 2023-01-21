#include<stdio.h>
#include<conio.h>

int main()

{
    int a=5,i=0,j=0,k=0;
   // printf("enter");
   // scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        //printf("*");
        for(j=0;j<a;j++)
        if(j+i>=a-1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
         printf("\n");
        for(k=0;k<a;k++)
        {
            if(i<=k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        } 
    }
return 0;
}