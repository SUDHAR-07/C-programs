#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int a;
    scanf("%d",&a);
    int b[a]; 
    for(int i = 0; i <a;i++){
        scanf("%d",&b[i]);
    }
    int y = 0;
    int k = 0;
    for(int i = 0; i < a-1; i++){
        if(b[i] > b[i+1]){
            y = y+1;
        } 
        if(b[i] < b[i+1]){
          break;
        }
    }
    printf("%d\n",y+1);  
    k = a % (y+1);
    if(k == 0){
        printf("No Remaining Elements");
    } else {
        k = a - k;
        for(int i = k; i < a; i++){
            printf("%d ",b[i]);
        }
      }
    return 0;
}

