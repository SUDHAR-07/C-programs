#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 3\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j % 2 != 0){
            printf("1");
            }
            else{
                printf("0");
            }
        }printf("\n");
    }
    return 0;
}