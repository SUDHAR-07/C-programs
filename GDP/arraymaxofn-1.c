/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
   unsigned int arr[5]={4,2,3,5,1};
  // int b=strlen(arr);
   int max1,s=0,max=0,min=0,i,j;
  for(i=0;i<5;i++)
   {
    for(j=0;j<5;j++)
    {
        if(j!=i)
        {
        s=arr[j]+s;
        }
    }
   // max=s;
  // printf("%d\n",s);
    if(max<s)
    {
      max=s;   
    }
    // if(max>s)
    // {
    //   min=s;    
    // }
    s=0;
  }
 // printf("min is %d",min);
  printf("max is %d",max);
  return 0;
}

