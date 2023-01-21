#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    scanf("%d",&a);
    int b = 0,c = 1,t = 0,sum = 0;
    for(int i = 2; i < a; ++i){
        t = b + c;
        sum = sum + t;
        b = c;
        c = t;
      //  System.out.print(b + " " + c + "\n");
    }
    printf("%d",sum+1);
    return 0;
}
