#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b=0;
    scanf("%d",&a);
    b=sqrt(a);
    if(b*b==a)
        {
        printf("Yes");
        }
    else
        {
        printf("No");
        }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
