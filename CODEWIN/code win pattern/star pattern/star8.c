
#include <stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d", &n);
     printf("Right traingle \n");
    for (i = 0; i < n; i++)
    {
        for(k=0;k<=n;k++){
           // 1st row
            if(i>=k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}