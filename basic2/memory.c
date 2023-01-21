#include<stdio.h>
#include<stdlib.h>

int main()
{
   int age= 40;
   double gpa = 3.66;
   char grade = 'A';
   printf("age: %p gpa: %p grade: %p", &age , &gpa ,&grade);         
   return 0;
}