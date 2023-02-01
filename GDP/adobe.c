#include <stdio.h>


int main()
{
    int a;
    printf("enter number");
    scanf("%d", &a);
    int rem,even=0,odd=0;
    while (a != 0)
    {
        rem = a % 10; //to take digits 345 % 10= 5, 34 % 10=4, 3 %10=3
        if(rem % 2 == 0)
        {
            even+=rem;
        }
        else
        {
            odd+=rem;
        }
         a = a / 10; 
    }
   
    if(even>odd)
    {
        printf("Even is greater");
    }
    else if(even==odd)
    {
        printf("both are same");
    }
    else
    {
        printf("odd is greater");
    }
}
  

