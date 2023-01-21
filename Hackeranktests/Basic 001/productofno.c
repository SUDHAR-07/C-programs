#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,s=1,rem;
    scanf("%d",&a);
    while(a!=0)
    {
    rem=a%10;
    s = s * rem; 
    a = a / 10;  
    }
    printf("%d",s);
    return 0;
}
