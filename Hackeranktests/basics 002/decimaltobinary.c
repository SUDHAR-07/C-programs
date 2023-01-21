#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a,c=1,d=0,i=0,j=0,b=0;
     scanf("%d",&a);
     c=a%2;
     a=a/2;
     while(a>0)
         {
         b=a%2;
         c=c*10+b;
         a=a/2;
         i+=1;
         }
    while((c>=0)&&(i>=j))
    {
     j+=1;
     d=c%10;
     printf("%d",d);
     c=c/10;
        }
    //printf("%d",c);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
