#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int a;
   scanf("%d",&a);
    int b[a]; 
    int max = 0, min = 0;
    for(int i = 0; i <a;i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0; i < a; i++){
        for(int j=i+1; j < a;j++){
            if(i % 2 != 0) {
                if(b[i] < b[j]){
                        min = b[i];
                        b[i] = b[j];
                        b[j] = min;
                    }
                } else if (i % 2 == 0) {
                    if(b[i] > b[j]){
                        max = b[i];
                        b[i] = b[j];
                        b[j] = max;
                    }
                }
            }
        }
        for(int i=0; i <a; i++){
            printf("%d ",b[i]);
        }
    return 0;
}
