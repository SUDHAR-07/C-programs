/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   // int a[5]={14,50,11,0,1};
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    int min,min2;
    if(a[0]>a[1])
    {
        min=a[1];
        min2=a[0];
    }
    else if(a[0]==a[1])
    {
        min=min2=a[0];
    }
    else
    {
        min=a[0];
        min2=a[1];
    }
    for(int j=2;j<n;j++)
    {
        if(a[j]<min)
        {
            min2=min;
            min=a[j];
        }
        else if(a[j]<min2)
        {
           min2=a[j];
        }
    }
    printf("%d",min2);
    return 0;
}

