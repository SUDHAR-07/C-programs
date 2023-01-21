
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    char s[100];
    scanf("%s",s);
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%c",s[i]);
            else
            printf(" ");
        }
        for(k=1;k<n;k++)
        {
            if((i+k)==(n-1))
            printf("%c",s[i]);
            else
            printf(" ");
        }printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%c",s[j]);
            else
            printf(" ");
        }
        for(k=1;k<n;k++)
        {
            if((i+k)==(n-1))
            printf("%c",s[i]);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


