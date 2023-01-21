#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    scanf("%d",&a);
     printf("Hollow square \n");
    for(int i=0;i<a;i++) {
        for(int j=0;j<a;j++) {
            if(i == 0 || i == a-1 || j == 0 || j == a-1){
            printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}