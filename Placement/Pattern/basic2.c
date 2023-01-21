#include <stdio.h>

int main()
{
  int i, j, n,k;
  printf("enter rows");
  scanf("%d", &n);
  printf("\n Right Diagonals \n");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++) 
  {
      if(i==j)
      {
          printf("*");
      }
      else
      {
          printf(" ");
      }
  }
  printf("\n");
  }

  printf("\n Left Diagonals \n");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++) 
  {
      if(i+j==n-1)
      {
          printf("*");
      }
      else
      {
          printf(" ");
      }
  }
  printf("\n");
  }
  return 0;
}