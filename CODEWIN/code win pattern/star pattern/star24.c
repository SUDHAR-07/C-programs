/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("left arrow");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<n-1)
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            if(i+k<=n-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            if(i>=k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}