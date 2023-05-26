#include<stdio.h>
int sum(int n)
{
    int r;
    int s=0;
    while(n>0)
    {
        r = n%10;
        s+=(r*r);
        n/=10;
    }
    return s;
}
int dc(int n)
{
    int cnt = 0;
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int res = sum(n);
    while(dc(res) > 1)
    {
        res = sum(res);
    }
    if(res==1) printf("True");
    else printf("False");
}