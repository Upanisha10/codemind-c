#include<stdio.h>
int sq(int);
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
       if(sq(a[i])) sum+=a[i]; 
    }
    printf("%d",sum);
}
int sq(int a)
{
  int i,k=0;
  for(i=1;i<=a;i++)
  {
      if(a==(i*i))
      {
          k++;
          break;
      }
  }
  if(k==1) return 1;
      else return 0;
}