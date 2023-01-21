#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a;
    int b;
    double c;
    char d[20];
    printf("enter ur grade");
    scanf("%c",&a);
    printf("enter ur age");
    scanf("%d",&b);
    printf("enter ur gpa");
    scanf("%lf",&c);
    printf("enter name");
    scanf("%s",&d);
    printf("\ngrade is %c",a);
    printf("\nage is %d",b);
    printf("\ngpa is %f",c);
    printf("\nname is %s",d);
    return 0;
}