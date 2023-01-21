#include<stdlib.h>
#include<stdio.h>
//4 TYPE OF FUNTION METHOD IS THERE
double cube(double num)
{
    double res=num * num *num;
    //WE CAN PRINT HERE TOO
    return res;
    //BELOW HERE NOT WORKS
}
int main()
{
    double a;
    printf("enter no");
    scanf("%lf",&a);
    printf("ans %f",cube(a));
    return 0;
} 
