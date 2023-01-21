#include<stdio.h>
int main() {
    char str[100];
    int count;
    scanf("%[^\n]%n",str,&count); // %n -> used to count the number of characters in a string
    for(int i=0;i<count;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            for(int j=i;j<count;j++)
                str[j] = str[j+1];
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               i--;
            count--;
        }
    }
    for(int i=0;i<count;i++)
       printf("%c",str[i]);
}
