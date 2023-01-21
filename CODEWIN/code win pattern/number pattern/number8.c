#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 8\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i + j== n-1 || i==j){
            printf("1");
            }
            else{
                printf("0");
            }
        }printf("\n");
    }
    return 0;
}