#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        char a[100];
        scanf("%s",a);
        int h = strlen(a);
        for(int i  = 0; i < h; i++) {
            for(int j = 0; j < h; j++) {
                if(i == h/2 && h % 2 == 0) {
                    break;
                }
                else if(i == j){
                    printf("%c",a[i]);
                } else if(i + j == h-1) { 
                    printf("%c",a[h-i-1]);
                } else {
                    printf(" ");
                }
            }
            if((h % 2 != 0)||(h % 2 == 0 && i != h/2)){
                printf("\n");
            }
        }
    return 0;
}
