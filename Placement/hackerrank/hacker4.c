#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   //printf("enter no of elements");
   scanf("%d",&a);
   int s[a];
   for(i=0; i<a && a<10;i++)
    {
     //printf("enter elements");
     scanf("%d",&s[i]);
    }
    int g=s[0];
    for(i=0;i<a;i=i+2)
    {
        if(g<s[i])
        {
            g=s[i];
        }
    }
    printf("%d",g);
}