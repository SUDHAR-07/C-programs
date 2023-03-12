/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1000;
    int res = SumOfSlopes(a,b);
    printf("%d",res);
    return 0;
}
int slopeOfNum(char num[], int n)
{
    int slope = 0;
    for (int i = 1; i < n - 1; i++) {
        if (num[i] > num[i - 1] && num[i] > num[i + 1])
            slope++;
        else if (num[i] < num[i - 1] && num[i] < num[i + 1])
            slope++;
    }
    return slope;
}

int getLength(char num[]){
    int i = 0;
    while(num[i] != '\0'){
        i++;
    }
    return i;
}

int SumOfSlopes(int a, int b){
    int ans = 0;
    for(int i = a; i <= b; i++){
        char result[50];
        sprintf(result, "%d", i);
        ans += slopeOfNum(result, getLength(result));
    }
    return ans;
}
