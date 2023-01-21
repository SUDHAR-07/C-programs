#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a;
    scanf("%d",&a);
    int b[a];
    for(int i = 0; i < a; i++) {
        scanf("%d",&b[i]);
    }
    int k;
    scanf("%d",&k);
    int m=0;
    int gcd = 0;
    for(int i =0; i < a;i++){
        for(int h = k; h > 0; h --) {
        if((b[i] % h == 0 ) && (k % h == 0) ) {
            m = h;
        //   printf("the disvisaor %d\n",m);
        }
        if(m > gcd){
              gcd = m; 
            }
        //printf("%d",m);
        }
    }
    printf("%d",gcd);

    return 0;
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  
