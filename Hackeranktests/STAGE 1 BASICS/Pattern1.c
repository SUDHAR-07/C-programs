#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    scanf("%d",&a);
    for(int i=a;i>=0;i--)
    {
      for(int j=0;j<i;j++)
      {
        if(j<=i)
        printf("%c",j+97);
       
      }
       printf("\n");
    }
    return 0;
}
