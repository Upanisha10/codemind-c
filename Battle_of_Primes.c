#include<stdio.h>
int prime(int n)
{
    int cnt=0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            cnt+=1;
        }
    }
    if(cnt == 0) return 1;
    else return 0;
}
int main()
{
    int n1,n2,t;
    scanf("%d%d",&n1,&n2);
    int n = n1+n2;
    for(int i=n+1; ; i++)
    {
        if(prime(i))
        {
            t = i;
            break;
        }
    }
    printf("%d",t-n);
}