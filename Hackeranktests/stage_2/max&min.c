#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int len;
    scanf("%d",&len);
    int a[len];
    for(int i = 0; i < len; i++) {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int j =0;
    int count = 0;
    int max = 0;
    int min = 0;
    for(int y=0; y <len;y++){
       // printf("before loop %d min %d \n",j,min);
       min = a[j];
        for(int i=0;i<k;i++)
    {
        // if (j == len-1){
        //  //   printf("its vimmd \n");
        // }
        if(j > len-1){
            break;
        }
        if (count % 2 == 0) {
            if(a[j] > max)
            {
                max = a[j];
            }
        }
        else if (count % 2 != 0){
            if(min > a[j]){
                min = a[j];
            }
        }
        j = j + 1;
    }
    //printf("j values %d \n",j);
    if(j > len){
      break;
    }
    if(count % 2 == 0){
      printf("%d ", max);
    } else if (count % 2 != 0){
        printf("%d ",min);
    }
    count= count + 1;
    if(j == len){
        j = j + 1;
    }
    }
    return 0;
}

