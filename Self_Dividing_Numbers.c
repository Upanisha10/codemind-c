#include<stdio.h>
int divisible(int);
int dc(int);
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(divisible(i))
        {
            printf("%d ",i);
        }
    }
}
int divisible(int n)
{
    int c=0,r,temp=n;
    while(n!=0)
    {
        r=n%10;
        if(r==0) {break;}
        else if(temp%r==0) {c++;}
        n/=10;
    }
    int d=dc(temp);
    if(c==d )return 1;
    else return 0;
}
int dc(int a)
{
   int count=0;
   while(a!=0)
   {
       a/=10;
       count++;
   }
   return count;
}