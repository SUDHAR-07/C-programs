
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int a;
  scanf("%d",&a);
  int b[a];
    for(int i = 0; i < a; i++) {
        scanf("%d",&b[i]);
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++){
            if(b[j] == i){
                printf("%d ",j);
            }
        }
    }
    return 0;
}
