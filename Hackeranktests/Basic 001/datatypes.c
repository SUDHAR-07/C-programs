#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    float b;
    double c;
    char d;
    char e[100];
    scanf("%d %f %lf %c %s", &a,&b,&c,&d,e);
    printf("%d\n%f\n%lf\n%c\n%s", a,b,c,d,e);
    return 0;
}
