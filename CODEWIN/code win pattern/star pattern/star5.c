
#include <stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d", &n);
     printf("Hollow Rhombus \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j+i==n-1)
            {
                printf("*");
            }
            else if(i == n-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=1;k<n;k++){
            if(i == 0 ){
            printf("*");
            } // 1st row
            else if(i+k==n-1){
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