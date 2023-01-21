#include<stdio.h>

int main(){
    int n,o=0,k=0,i=0,j=0;
    scanf("%d",&n);
    printf("Plus star \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==n-1){
                printf("+");
            }
            else if(i==n-1){
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        for(k=0;k<n;k++){
            if(i==n-1){
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
           for(o=0;o<n;o++){
            if(o==n-1){
                printf("+");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}