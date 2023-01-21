
#include <stdio.h>

int main()
{
//     a=2,b=3

// b=a++ + b--; (2 + 3) b=5
// a=3 b=5
// a=a-- + ++b; (3 +6)
// a=9 b=6
// b=++a + --b; (10 + 5)
// a=10 b=15
    // assign ana aprom ++/ -- pana kudathu u damn it
    int a=2,b=3;
    b=a++ + b--;
    a=a-- + ++b;
  //  b=++a + --b;
    printf("%d %d",a,b);
 
}