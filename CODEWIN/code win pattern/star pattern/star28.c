#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("Eight star \n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            // Row wise
        if(i == 0 && j != 0 && j!= n-1){
            printf("*");
        }
        //column wise
        else if((j == 0 && i !=0 && i != n-1)||(j==n-1 && i!=0 && i !=n-1)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            // Row wise
        if(i == n-1 && j != 0 && j!= n-1){
            printf("*");
        }
        //column wise
        else if((j == 0 && i !=0 && i != n-1)||(j==n-1 && i!=0 && i !=n-1)){
            printf("*");
        }
        else if(i == 0 && j != 0 && j!= n-1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }printf("\n");
    }
    return 0;
}