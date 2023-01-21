#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int b = 0;
    if(n % 2 != 0){
        b = b + 1;
        n = n+1;
    }
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {         
            if(i>=j)
                printf("*");
            else
                printf(" ");
        }    
        for(int k=0;k<n/2;k++)
        {
            if(b == 1 && k == 0)
                continue;
            if(i+k>=(n/2)-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
     for(int i=0;i<n/2;i++)
    {
        if(b == 1 && i == 0) 
                continue;
        for(int j=0;j<n/2;j++)
        {
            if(i+j<=(n/2)-1)
                printf("*");
            else
                printf(" ");
        }    
        for(int k=0;k<n/2;k++)
        {
            if(b == 1 && k == 0) 
                continue;
            if(i<=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}