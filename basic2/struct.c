#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    int age;
    double gpa;
    char name[50];
    char major[50];
};

int main()
{
    struct Student Student1;
    Student1.age=22;
    Student1.gpa=3.4;
    strcpy(Student1.major,"ece");
    strcpy(Student1.major,"tom");
    printf("%s \n",Student1.major);
    printf("%s \n",Student1.name);
    printf("%d \n",Student1.age);
    printf("%f \n",Student1.gpa);


    struct Student Student2;
    Student2.age=98;
    Student2.gpa=390.4;
    strcpy(Student2.major,"vlsi");
    strcpy(Student2.name,"home");
    printf("%s \n",Student2.major);
    printf("%s \n",Student2.name);
    printf("%d \n",Student2.age);
    printf("%f \n",Student2.gpa);



    return 0;
}