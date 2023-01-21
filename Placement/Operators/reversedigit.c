#include <stdio.h>
#include <conio.h>

int sum(int a)
{
    int s = 0, rem;
    while (a != 0)
    {
        rem = a % 10; //to take digits 345 % 10= 5, 34 % 10=4, 3 %10=3
        s = s * 10 + rem; // 0 * 10 + 5 =5 ,5*10 + 4 =54, 54*10 +3= 543 
        a = a / 10; // 345 / 10= 34, 34 /10 =3, 3/10=0
    }
    return s;
}
int main()
{
    int a;
    printf("enter number");
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}