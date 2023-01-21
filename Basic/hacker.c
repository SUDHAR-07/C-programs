#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char name[20];
    printf("enter ur full name \n");
    gets(name);
    printf("ur name is %s \n",name);
    char ch;
    char s[10];
    printf("enter character \n");
    scanf("%c",&ch);
    printf("enter name");
    scanf("%s",&s);
    printf("%c \n",ch);
    printf("%s \n",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}    