#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 7\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == n/2 || j==n/2){
            printf("0");
            }
            else{
                printf("1");
            }
        }printf("\n");
    }
    return 0;
}