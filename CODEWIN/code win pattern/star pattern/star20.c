#include<stdio.h>

int main(){
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
     printf("Half diamond \n");
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(i>=k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        //printf("\n");
        for(j=n;j>0;j--){
        if(i<j){
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