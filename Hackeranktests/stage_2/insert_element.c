#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

   int ar[100],i,n,count,by;
    scanf("%d", &n);
       for(i=0;i<n;i++)
            {
          scanf("%d",&ar[i]);
        }
   scanf("%d",&by);
   for(i=0;i<n;i++)
   {
       
    if(by<ar[i])
     {
       count = i;
       break;
     }
     else
     {
         count=i+1;
      }
     }
   for(i=n;i>=count;i--)
      ar[i+1]= ar[i];

      ar[count]=by;
   for(i=0;i<=n;i++)
      printf("%d ",ar[i]);
    
    return 0;
}