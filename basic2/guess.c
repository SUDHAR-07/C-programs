#include<stdio.h>
#include<stdlib.h>

int main()
{
 int secret=7;
 int guess;
 int guesscount=0;
 int limit=3;
 int out=0;
 while(guess!=secret && out==0)
 {
   if(guesscount<limit)
   {  
     printf("enter no");
     scanf("%d", &guess);
     guesscount++;
   }else 
   {
   out=1;
   } 
 }
 if(out ==1)
 {
  printf("out of guess");
 }else
 {
  printf("you win ");
 }  
 return 0;
}
