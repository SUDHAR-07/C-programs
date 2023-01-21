#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("pyramid star \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j >= n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i>k){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}