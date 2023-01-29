#include<stdio.h>
int main()
{
    int t;
    long long int da,d,p,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&da,&d,&p,&q);
        long long int n1=da/d,s=0;
        long long int r=da%d;
        for(long long int i=0;i<n1;i++)
        {
            s+=(p+q*i)*d;
        }
        s+=(p+q*n1)*r;
        printf("%lld
",s);
    }
}