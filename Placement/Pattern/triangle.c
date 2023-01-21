#include<stdio.h>
void main()
{
    int i=0,j=0,k=0,a[10],n,d=0;
    printf("number of terms");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
               if(((a[i]+a[j])>a[k])&&((a[j]+a[k])>a[i])&&((a[k]+a[i])>a[j]))
               {
                    d++;
                    printf("(%d %d %d)\t",a[i],a[j],a[k]);
               }
            }
        }
    }
    printf("\nTherefore %d triangle is possible from the given array",d);
}


