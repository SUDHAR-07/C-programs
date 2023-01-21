#include <stdio.h>

int main()
{
  int i, j, n,k;
  printf("enter rows");
  scanf("%d", &n);
      printf(" \t straight patter \n \n \n");
      for (i = 1;i <= n; i++)
      {
        //  printf("*");
          for (j = 1; j <= i; j++)
          {
              printf("%d \t",j);
             // printf("*");
          }
          printf("\n");
      }

  printf(" \t \n \n Inverted pattern  \n \n \n");
       for (i = n;i >=1; i--)
      {
        //  printf("*");
          for (j = 1; j <= i; j++)
          {
              printf("%d\t",j);

  //            printf("*");
          }
          printf("\n");
      }
  printf(" \t \n \n centered pattern  \n \n \n");
  for (i = 1; i < n; i++)
  {
    for (k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (j = 1; j <= (i * 2 - 1); j++)
    {
      printf("*");

      //            printf("*");
    }
    printf("\n");
  }

  //         *
  //       * * *
  //     * * * * *
  //   * * * * * * *
  // * * * * * * * * *

  return 0;
}
