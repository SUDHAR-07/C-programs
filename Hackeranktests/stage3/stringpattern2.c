#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      char a[100];
       scanf("%s",&a);
        int b = strlen(a);
        int h = b / 2;
        int g = 0;
        for(int i = 0; i < b; i ++){
            for(int j= 1; j < b-i;j++){
                    printf(" ");
            }
            for(int j= 0; j <=i; j++){
                if(j + h < b)
                {
                    printf("%c",a[j + h]);
                } else {
                    printf("%c",a[g]);
                    g++;
                }
            }
            g = 0;
            printf("\n");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
