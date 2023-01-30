#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("%d ",a);
    scanf("%d",&n);
    while(--n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }
    
}