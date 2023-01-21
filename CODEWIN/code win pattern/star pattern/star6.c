
#include <stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d", &n);
     printf("mirrored Rhombus \n");
    for (i = 0; i < n; i++)
    {
        for (j = n; j >= 0; j--)
        {
            if (i+j < n)
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
           // 1st row
            if(i>k){
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