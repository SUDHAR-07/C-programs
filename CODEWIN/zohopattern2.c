#include<stdio.h>
int main(){
int n,i,j,k, num;
scanf("%d", &n);
for(i=1; i<=n; i++){ 
for(j=i; j<=n;j++){ 
printf("%3d", j);
}
for (k=1; k<i; k++){ 
printf("%3d", k);
}
printf("\n");
}
}
