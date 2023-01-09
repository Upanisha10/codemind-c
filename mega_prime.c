#include<stdio.h>
int prime(int);
int main()
{
  int n,r,primecount=0,digitcount=0;
  scanf("%d",&n);
  if(prime(n))
  {
    while(n>0)
    {
      r=n%10;
      if(prime(r))
      {
        primecount++;
      }
      digitcount++;
      n/=10;
    }
    
    if(primecount==digitcount)
    {
      printf("Mega Prime");
    }
    else
    {
      printf("Not Mega Prime");
    }
  }
  else
  {
    printf("Not Mega Prime"); 
  }
}
int prime(int a)
{
  int c=0,i;
  for(i=1;i<=a;i++)
  {

  if(a%i==0)
  {
    c++;
  }
}
  if(c==2)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}