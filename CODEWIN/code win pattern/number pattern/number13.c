#include<stdio.h>

int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
    printf("number 10\n");
    k=1;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n+i;j++,k++){
            printf("%3d",k);
        }printf("\n");
    } 
    return 0;
}