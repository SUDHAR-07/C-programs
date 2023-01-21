#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a,count=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        if(a==1 || a==2 || a==3 || a==5 || a==7)
            count ++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}