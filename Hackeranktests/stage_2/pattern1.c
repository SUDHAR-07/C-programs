#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a;
  scanf("%d",&a);
  for(int i=0;i<a;i++) {
    for(int j =0;j<a;j++){
      if(i == a/2 && a % 2 == 0) {
        break;
      }
      else if(i == j || i + j == a-1){
        printf("*");
      } else { 
        printf(" ");
      } 
      }
      if((a % 2 != 0)||(a % 2 == 0 && i != a/2)){
        printf("\n");
      }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
