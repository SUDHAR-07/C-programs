#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char str[100],longest[30];
    int c =0,m=0,i,j,ind=0,len;
    char s[100],n[30];
    scanf("%[^\n]%*c", s);
    len=strlen(s);
    ind=0;
    for(i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            c++;
        }
        else
        {
            if(c>m)
            {
                m=c;ind=i-m;
            }
            c=0;
        }
    }
    if(c>m)
    {
        m=c;
        ind=len-m;
    }
    j=0;
    for(i=ind;i<ind+m;i++)
    {
        n[j]=s[i];
        j++;
    }
    n[j]='\0';
    printf("%s\n",n);
    printf("%d",m);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
