#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("Right arrow star \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i > j){
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i <= k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            if(i < j){
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i+ k >= n-1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}