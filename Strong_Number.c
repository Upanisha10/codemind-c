#include<stdio.h>
int fact(int);
int main()
{
    int n,r,f,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        f=fact(r);
        sum+=f;
        n/=10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}