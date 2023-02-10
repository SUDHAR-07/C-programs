#include <stdio.h>

int main(void) {
	// your code goes here

int n,i,j,intial,final,slide=0,moon=0;
scanf("%d",&n);
int a[n][2];
for(i=0;i<n;i++)
{
    for(j=0;j<2;j++)
    scanf("%d",a[i][j]);
}
    // 3 8

  while(intial>final) // 13>8
    {
     intial=intial-1; 
     slide=slide+1;
     if(intial==final)
     {
         printf("%d",slide);
         break;
     }
    }
    while(final>intial) // 8 > 3
    {
        if(intial>0)
        {
        intial=intial+2; // 5 
        moon=moon+1;
        if(intial>final)
        {
            intial=intial-1;
            moon=moon+1;
            if(intial==final)
            printf("%d",moon);
            break;
        }
        }
        if((intial<0)&&(final<0))
        {
            intial=intial+2; //-11+2=9
            moon=moon+1;
            if(intial>final)
            {
                intial=intial-1;
                moon=moon+1;
                if(intial==final)
                {
                printf("%d",moon);
                break;
                }
            }
            if(intial==final)
            {
            printf("%d",moon);
            break;
            }
        }
        if((intial<0)&&(final>0))
        {
            intial=intial+2;
            moon=moon+1;
            if(intial==final)
                {
                printf("%d",moon);
                break;
                }
            if(intial>final)
            {
                intial=intial-1;
                moon=moon+1;
                if(intial==final)
                {
                printf("%d",moon);
                break;
                }
            }
        }
    }
	return 0;
}


