/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
        if(i == j || i + j == a-1){
        printf("*");
        } else {
        printf(" ");
        }
      }
      if((a % 2 ==0 && i != a/2) || (a % 2 != 0)){
        printf("\n");
      }
  }
  return 0;
}
