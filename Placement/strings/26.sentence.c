#include<stdio.h>
#include<string.h>
void main()
{
    char a[100]={"ethe jgkv vkvckhv vkvk"};
    printf("enter a sentence");
    //scanf("%s",&a);
    for(int i=0;i<strlen(a);i++)
    {
        if (a[i] == " ")
        {
            continue;
        }
        else if(a[i] =="/0")
        {
            break;
        }
        else
        printf("a[i]");
    }
}

   