#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int max,min,m=0;
    double sum=0;
    int a[100];
    for(int i=0;i<100;i++)
    { 
    scanf("%d",&a[i]);
    m=m+1;  
    if(a[i]==-1)
      break;
    }
  min=a[0],max=a[0];
  double avg;
  for(int i=0;i<m-1;i++)
  {
    if(a[i]==-1)
    {
      break;
    }
    if(a[i]!=-1)
    {
    if(min>a[i])
    {
      min=a[i];
    }
    if(max<a[i])
    {
      max=a[i];
    }
    sum=sum+a[i];
    }
  }
  avg=sum/(m-1);
    printf("Min=%lu\n",min);
    printf("Max=%lu\n",max);
    printf("Sum=%0.f\n",sum);
    printf("Avg=%lf\n",avg);
    return 0;
}
