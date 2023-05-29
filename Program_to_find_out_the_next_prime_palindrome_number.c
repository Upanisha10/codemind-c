#include<stdio.h>
int pal(int n)
{
    int r,rev = 0;
    int temp = n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(rev == temp) return 1;
    else return 0;
}
int prime(int n)
{
    int cnt=0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt == 0) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1; ; i++)
    {
        if(pal(i) &&  prime(i))
        {
            printf("%d",i);
            break;
        }
    }
}