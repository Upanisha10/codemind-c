#include<stdio.h>
int main()
{
    long long int n;
    int r,rev=0,c=0;
    scanf("%lld",&n);
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
        c++;
    }
    if(c==10 && rev%10!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}