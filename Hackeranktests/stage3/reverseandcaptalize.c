#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void u(char susan[], int c)
{
    int i;
    for(i=0;i<c;i++)
    {
        if(*(susan+i) >= 'a' && *(susan+i) <= 'z')
        {
            *(susan+i) = *(susan+i) - 32;
        }
    }
}

char* h(char* susan, int tot,int *now, int *g) 
{
    for(int i=0;i<tot;i++)
    {
        if((*(susan+i) >='a' && *(susan+i)<='z') || (*(susan+i)>='A' && *(susan+i)<='Z'))
        {
            (*g)++;
            return(susan+i);
        }
        else
        {
            (*now)++;
        }
    }
    return (susan);
}

void l(char susan[], int c)
{
    int i;
    for(i=0;i<c;i++)
    {
        if(*(susan+i) >= 'A' && *(susan+i) <= 'Z')
        {
            *(susan+i) = *(susan+i) + 32;
        }
    }
}

void r(char susan[], int c)
{
    int i,m=c/2;
    char temp;
    for(i=0;i<m;i++)
    {
        temp = *(susan+i);
        *(susan+i)=*(susan+c-i-1);
        *(susan+c-i-1)=temp;
    }
}

int main()
{
    int g=0,c=0,i,n;
    char susan[100],*begin;
    scanf("%[a-z ,!?.A-Z]s",susan);
    n=strlen(susan);
    begin=(char*)susan;
    for(i=0;susan[i]!='\0';i++)
    {
        if(susan[i]==' ' || susan[i+1]=='\0' || susan[i]=='!' || susan[i]=='?' || susan[i]==',')
        {
            if(g % 2 == 0)
            {
                r(begin,c);
                l(begin,c);
            }
            else if(g % 2 == 1)
            {
                u(begin,c);
            }
            begin = susan+i+1;
            begin = h(begin,n-1-i,&i,&g);
            c = 0;
        }
        else if((susan[i]>='a' && susan[i]<='z') || (susan[i]>='A' && susan[i]<='Z'))
        {
            c++;
        }
    }
    printf("%s",susan);
    
}