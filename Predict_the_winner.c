#include<stdio.h>
int main()
{
    int n,i,x=0,y=0,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            x+=a[i];
        }
        else y+=a[i];
    }
    if(x>y) b=x-y;
    else b=y-x;
    if(b%4==0) printf("X");
    else printf("Y");
}