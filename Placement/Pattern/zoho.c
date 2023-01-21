#include <stdio.h>
#include<string.h>
int main()
{
  int i, j, n, k;
  char a[100];
  gets(a);
  //printf("enter rows");
  //scanf("%d %n", &n,&k);
  printf("\n STAR \n");
  // for (i = 0; i < n; i++)
  // {
  //   for (j = 0; j < n; j++)
  //   {
  //     if ((i == j) || (i + j == n - 1))
  //     {
  //       printf("*");
  //     }
  //     else
  //     {
  //       printf(" ");
  //     }
  //   }
  //   printf("\n");
  // }
  k=strlen(a);
  for(i=0;i<k;i++)
  {
      for(j=0;j<k;j++)
  {
      if((i==j) || (i+j==k-1))
      {
          printf("%c",a[i]);
         // continue;
      }
      else
      {
          printf(" ");
      }
  }
  printf("\n");
  }
}