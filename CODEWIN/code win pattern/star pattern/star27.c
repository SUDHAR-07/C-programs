#include<stdio.h>

int main(){
    int n,k=0,i=0,j=0;
    scanf("%d",&n);
    printf("X star \n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i+k==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<1;i++){
        for(j=0;j<n;j++)
        {
        if(j==n-1){
       // int y=0;
        printf("*");
            //break;
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-1;j++){
            if(j+i==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i==k){
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