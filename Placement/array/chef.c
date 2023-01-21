#include <stdio.h>

int main()
{
int n,i,j,intial,final,moon=0,m=2;
scanf("%d",&n);
int a[n][m];
for(i=0;i<n;i++)
{
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
}
for(int i=0;i<n;i++)
{
        moon=0;
        final=a[i][1];
        intial=a[i][0];
        while (final > intial)	
	   {
	       intial=intial+2; 
	       moon=moon+1; 
	       if(intial>final)
	       {
	           intial=intial-1;
	           moon=moon+1;
	           printf("%d\n",moon);
	           break;
	       }
	       else if(intial==final)
	       {
	       printf("%d\n",moon);
	       break;
	       }
	   }
}
    return 0;
}
