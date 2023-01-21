#include <stdio.h>
#include <conio.h>
// multiplication divison remainder add sub 
void main()
{
    // int a = 5, b = 1, g;
    // b = a++ + a++ + a++ + a++ + a++; //left to ryt 9+8+7+6+5 = 35
    // printf("%d \n  %d \n", b, a);    // 35 10
    // int c = 4, d = 2, x = 6, y = -10, z;
    // z = x++ - --y * d / c; // multiply 1st = -11*2 = -22/4= -5, 6-(-5)=11
    // printf("%d \n", z);    //11
    // printf("%d %d %d", b, d, z); 
    // g = b-- + d-- + b * z;    // 35 + 2 + 34*11 = 374 +2=35= 411
    // printf(" \n %d \n %d \n %d \n %d \n", g, d, b, z); //
    // int s = 2, k = 5, m = 7, mimo;
    // mimo = s % m + k * m / s; // 1st * 5 *7= 35 35/2= 17  2%7=2 2+17=19
    // printf("%d \n", mimo);    // 19
    // // int b = 35, d = 2, z = 11, g;
    // // g = b-- - b * z; // post so  LEFT - Right 34 - 34*11 = - 340
    // // printf("%d", g);
    // // printf("%d %d %d",b,d,z);
  //  i=k-- + --k * l / m % k + (k+m); // 40 + 38 * (-30) / 21 % 21 + 61  -1140/21 = -54  -54/21 -
  //  printf("%d %d %d %d",i,k,l,m);
    int k=40,l=-30,m=21,i;
    i=++k % (--k * 6 / l ) * l; 
    printf("%d",i);
    printf("jb");
}