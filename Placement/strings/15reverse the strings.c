#include <stdio.h>

int main()
{
  int n,i;
  char s[10];
  printf("enter no. of letters");
  scanf("%d",&n);
  printf("enter strings");
  scanf("%s",s);
  for(i=n-1;i>=0;i--)
  {
  printf("%c",s[i]);
  }
    return 0;
}