#include<stdio.h>
#include<stdlib.h>

int main()
{
   int age= 40;
   double gpa = 3.66;
   char grade = 'A';
   int * page=&age;
   double *pgpa=&gpa;
   char *pgrade =&grade;  
   printf("%d %lf %c\n", *page,*pgpa,*pgrade);
   printf("age: %p gpa: %p grade: %p\n", &age , &gpa ,&grade); 
   printf("age: %d gpa: %lf grade: %c\n", *&age , *&gpa ,*&grade);  
   printf("age: %d gpa: %lf grade: %c\n", &*&age , &*&gpa ,&*&grade);         
   printf("age: %d gpa: %lf grade: %c\n", *&*&age , *&*&gpa ,*&*&grade);         


   return 0;
}