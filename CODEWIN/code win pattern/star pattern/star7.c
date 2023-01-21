
#include <stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d", &n);
     printf("Hollow mirrored Rhombus \n");
    for (i = 0; i < n; i++)
    {
        for (j = n; j > 0; j--)
        {
        //     if (i+j < n)
        //     {
        //         printf("*");
        //     }
            if(j+i==n || i==0){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(k=1;k<n;k++){
           // 1st row
            if(i == k || i == n-1){
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