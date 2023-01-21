#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
        int b[a];
        for(int i = 0; i< a;i++){
            scanf("%d",&b[i]);
        }
      int start = 0, count = 0, c = 0, m =0,g=0;
      for(int y = 0; y< a*a; y++) {
          start = 0,count = 0,m = 0,c = 0;
          for(int i = 0; i < a; i++){
            for(int r = i+1; r < a;r++){
                if(b[i] == b[r]){
                    m++;
                    count ++;
                    start = i;
                }
                if(b[i] != b[r]){
                    break;
                }
            }
            if(m != 0){
                count = count + 1;
                break;
            }
        }
        for(int j = start; j < a; j++){
            if(j + count < a){
                c++;   
                b[j] = b[j + count];
            }   
        }
        a = a - count;
        if (a == 1 || count == 0){
                g++;
                for(int t =0; t < a; t++){
                    printf("%d ",b[t]);
                }
                break;
            }
      }
      if(g == 0){
        printf("No Elements");
      }  
    return 0;
}