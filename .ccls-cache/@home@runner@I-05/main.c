#include<stdio.h>
#include<math.h>
int main()
{
  int n,i;
  float *p,a[20],sum=0,mean=0,var=0,sd=0;
  printf("Enter n:");
  scanf("%d",&n);
  printf("Enter the array elements");
  p=a;
  for(i=0;i<n;i++)
    {
      scanf("%f",p);
      p++;
    }
  p=a;
  for(i=0;i<n;i++)
    {
      printf("Array elements are %f\n",*p);
      p++;
    }
  p=a;
  for(i=0;i<n;i++) 
  {
    sum=sum+*p;
    p++;
  }
  printf("sum=%f\n",sum);
  mean=sum/2;
  printf("mean=%f\n",mean);
  p=a;
  for(i=0;i<n;i++)
    {
      var=var+(pow((mean-*p),2));
      p++;
    }
  var=(var)/n;
  printf("varience=%f\n",var);
  sd=sqrt(var);
  printf("standard deviation=%f\n",sd);
  return 0;
}

