#include <stdio.h>
#include <string.h>
int main()
{
    int c, d, s, r,n,g, i = 0, j = 0;
    printf("enter no of character");
    scanf("%d",&n);
    printf("enter no of character");
    scanf("%d",&g);
    char a[n];
    char b[g];
    printf("enter character");
    scanf("%s",a);
    scanf("%s",b);
   // c = strlen(a);
    //d = strlen(b);
    //s = c + d;
    s=n+g;
    char t[s];
    for (i = 0; i < n; i++)
    {
        t[i] = a[i];
    }
   // printf(" %d %s",i,t);
   // null character 
    for (j = 0;  j < g+1; j++)
    {
        t[i+j] = b[j];
    }
  //  printf("%d %d",i,j);
    printf(" %s", t);
    return 0;
}