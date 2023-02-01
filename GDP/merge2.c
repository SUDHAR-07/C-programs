#include <stdio.h>
#include<string.h>
int main()
{
    int n,l,i,j;
    char c[10][10];
    char a[10]={"arun"};
    char b[10]={"sundar"};
    n=strlen(a);
    l=strlen(b);
    for(i=0;i<2;i++)
    {
        if(i==0)
        {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[j];   
        }
        }
        else
        for(j=0;j<l;j++)
        {
            c[i][j]=b[j];   
        }
    }
    printf("%s %s",c[0],c[1]);
    return 0;
}

