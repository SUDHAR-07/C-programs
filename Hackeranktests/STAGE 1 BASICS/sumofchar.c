#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[100];
  int s=0;
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++)
    {
      s=s+(int)a[i];
    }
   printf("%d",s);
    return 0;
}
