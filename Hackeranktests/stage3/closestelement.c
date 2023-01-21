#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d",&a);
    int b[a]; 
    int sum = 0;
    for(int i = 0; i <a;i++){
        scanf("%d",&b[i]);
        sum += b[i]; 
    }
    int y = sum / a;
        int count = 0,index = 0,temp = 0;
    // Arrays.sort(b);
    for(int j = 0; j <a;j++){
        for(int i = 0; i < a; i++)
        {
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i < a; i++){
        if(b[i] == y){
            printf("%d",b[i]);
            count++;
            break;
        }
    }
    if(count == 0){
        b[0] = y;
        for(int j = 0; j <a;j++){
            for(int i = 0; i < a; i++)
        {
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i < a; i++){
        if(b[i] == y){
            index = i;
        }
    }
    if(b[index] - b[index -1] > b[index + 1] - b[index]){
        printf("%d",b[index+1]);
    } else if(b[index] - b[index -1] <= b[index + 1] - b[index]) {
        printf("%d",b[index-1]);
        }
    }
    return 0;
}
