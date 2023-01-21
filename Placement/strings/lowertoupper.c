#include <string.h>
#include <stdio.h>
// program to convert lowercase string to uppercase
int main()
{
    int len, i, asc;
    char a[100];
    printf("Enter the string:");
    scanf("%[^\n]%*c", &a);
    //scanf("%s", a);
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
        if ((a[i] >= 'A') && (a[i] <= 'Z'))
        {
            asc = a[i] + 32;
            printf("%c", asc);
        }
        else if((a[i] >= 'a') && (a[i] <= 'z')) 
        {
            asc = a[i] - 32;
            printf("%c", asc);
        }
        // else if(a[i]=="\n")
        // {
        //     printf(" ");
        // }
        else
        {
            printf("%c",a[i]);
        }
    }
}
