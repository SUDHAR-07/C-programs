#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 4\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i ==0 || j==0 || i == n-1 || j == n-1){
            printf("1");
            }
            else{
                printf("0");
            }
        }printf("\n");
    }
    return 0;
}