#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i = 0; i < a; i++){
        scanf("%d",&b[i]);
    }
    int g = 2147483647;
    for(int i = 0; i < a; i++){
            for(int j = 0; j < a; j++){
                if(b[i] <= b[j] && i != j && b[j] < g){
                    g = b[j];
                }
            }
            if(g == 2147483647 && i != a-1) {
                printf("%d-> ,", b[i]);
            }else if(i != a-1){
                printf("%d->%d,",b[i],g);
            }else {
               printf("%d->%d",b[i],g);
            }
            g = 2147483647;
        }
    return 0;
}

