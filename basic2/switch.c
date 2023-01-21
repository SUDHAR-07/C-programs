#include<stdio.h>
#include<stdlib.h>

int main()
{
    char grade;
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        /* code */
        printf("you");
        break;
    case 'B':
        /* code */
        printf("you are ");
        break;
    case 'C':
        /* code */
        printf("you are legend");
        break;    
    default:
        printf("INVALID");
        break;
    }
    return 0;
}