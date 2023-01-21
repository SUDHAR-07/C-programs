#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int a;
        scanf("%d",&a);
        int count = 0,start = 1000,end = 0;
        int b[a];
        for(int i = 0; i < a; i++) {
            scanf("%d",&b[i]);
        }
        for(int i = 0; i < a/2; i ++) {
            for(int j = 0; j < a; j++){
                if(b[i] == b[j] && i != j){
                    // System.out.println(b[j]);
                    // System.out.println(j-i);
                    if((j-i) < start){
                        start = j - i;
                        end = i;
                    }
                    count++;
                }
            }
        }
        if(count == 0){
            printf("No Element Is Repeated\n");
        } else {
            printf("%d",b[end]);
        }
    return 0;
}
