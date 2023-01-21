#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0,l=0;
    scanf("%d",&n);
    printf("Hollow Diamond star \n");
    for(i=0;i<n;i++){
        for(j=n;j>0;j--){
            if(i<j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(k=n-1;k>=0;k--){
            if(k+i <=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i >=j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(k=0;k<n;k++){
            if(i +k>=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}