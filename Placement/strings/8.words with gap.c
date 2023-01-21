#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a[100];
    char b[100];
    scanf("%[^\n]%*c",&a);
    scanf("%s", &b);
  	printf("Hello, World!\n");
    printf("%s\n",a);  
    printf("%s\n",b);  
    return 0;
}  