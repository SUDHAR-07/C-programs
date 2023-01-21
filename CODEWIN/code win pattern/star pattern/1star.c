#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("Square\n");
    for(int i=0;i<a;i++) {
        for(int j=0;j<a;j++) {
            printf("*");
        }
        printf("\n");
    }
}