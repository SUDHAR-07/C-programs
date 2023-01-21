#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE * first= fopen("stat.txt","w");//w = overridden
    fprintf(first, "SUDHARSAN\n  lets be happy \n ALWAYS \n");
    fclose(first);
    //to add a file
    FILE * irst= fopen("stat.txt","a");
    fprintf(irst,"SUPERMAN");
    fclose(irst);
    char line[255];
    FILE * Third =fopen("stat,txt","r");
    fgets(line, 255,Third);
    printf("%s", line);
    fclose(Third);
    return 0;
}