#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char s[100];
  scanf("%[^\n]%*c",s);
  int a = strlen(s);
  for(int i = 0; i < a; i ++){
    printf("%c",s[a-i-1]);
  } 
  // printf("\0");
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
