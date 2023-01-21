#include<stdio.h>
int main()
{
    float v = 3.1459239435435;
    double w = 3.123456789123456;
    long double s = 3.123456789123456789;
    printf("%d \n",sizeof(float));
    printf("%d \n",sizeof(double));
    printf("%d \n",sizeof(long double));
    printf("%.16f \n", v);
    printf("%.16lf \n", w);
    printf("%.21Lf \n",s);
}