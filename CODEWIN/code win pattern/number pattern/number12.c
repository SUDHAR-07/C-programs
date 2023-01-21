#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 12\n");
    for(i=1;i<=n;i++){
        for(j=i;j<n+i;j++){
            printf("%d",j);
        }printf("\n");
    } 
    return 0;
}