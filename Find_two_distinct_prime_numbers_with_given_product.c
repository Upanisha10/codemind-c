#include<stdio.h>
int prime(int);
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i))
        {
            a=i;
            break;
        }
    }
    b=n/a;
    if(n%b==0 && prime(b)) printf("%d %d",a,b);
    else printf("-1");
}
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0) c++;
    }
    if(c==2) return 1;
    else return 0;
}