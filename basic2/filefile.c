#include<stdlib.h>
#include<stdio.h>

int main()
{  char line[255];
   FILE * Third =fopen("stat,txt","r");
    fgets(line, 255,Third);
    printf("%s", line);
    fclose(Third);
    return 0;
}