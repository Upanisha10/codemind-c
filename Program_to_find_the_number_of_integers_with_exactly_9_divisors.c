#include<stdio.h>
int divisor(int);
int main()
{
  int a,i,d=0;
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
      if(divisor(i))
      {
          d++;
          printf("%d ",i);
      }
  }
  printf("
Total=%d",d);
}
int divisor(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==9) return 1;
    else return 0;
}