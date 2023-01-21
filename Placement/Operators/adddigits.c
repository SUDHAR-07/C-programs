#include <stdio.h>
#include <conio.h>

int sum(int a)
{
    int s = 0;
    while (a != 0)
    {
        s = s + a % 10; //to take digits 345 % 10= 5
        a = a / 10;     // to remove last digits 345/10 = 34
    }
    return s;
}
int main()
{
    int a;
    printf("enter number \t");
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}