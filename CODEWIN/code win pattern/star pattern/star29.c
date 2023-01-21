#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("Heart star \n");
    for(i=n/2;i<n;i++){
        for(j=1;j<n;j++){
            if((i + j >= n-1)&&(i % 2 !=0)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(k=1;k<n;k++){
            if((i + k >= n-1)&&(i % 2 !=0)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    //n=n+n;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i<=j){
        printf("*");
        }
        else{
            printf(" ");
        }
    }
      for(k=1;k<n;k++){
            if(i + k <= n-1 ){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}