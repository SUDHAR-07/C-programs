#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int b[n][n],a=0,z=n-1,h=1;
    for(i=0;i<=n/2;i++,a++,z--)
    {
         for(j=a;j<z;j++,h++)
         b[i][j]=h;
         for(k=a;k<z;k++,h++)
         b[k][j]=h;
         for(l=z;l>a;l--,h++)
         b[k][l]=h;
         for(m=z;m>a;m--,h++)
         b[m][l]=h;  

         if(a==z)
         b[a][z]=h++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
           printf("%7d",b[i][j]);
        printf("\n");
    }
   return 0;    
}
