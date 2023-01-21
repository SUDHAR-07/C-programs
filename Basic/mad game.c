#include<stdlib.h>
#include<stdio.h>

int main()
{
  char color[20];
  char noun[20]; 
  char celeb[20];

  printf("enter celeb:");
  //scanf("%s",celeb);
  fgets(celeb, 20, stdin);
  printf("enter color:");
  scanf("%s",color);
  printf("enter noun:");
  scanf("%s",noun);
  printf("i love %s\n",color);
  printf("i hate %s\n",noun);
  printf("i worship %s bjhgrsiufguhukhkg\n",celeb);
  
  return 0;
}