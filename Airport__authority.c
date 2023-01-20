#include<stdio.h>
int main()
{
    int t,i,v,sum=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    for(i=0;i<t;i++)
    {
        if(a[i]>v) sum+=2;
        else sum+=1;
    }
    printf("%d",sum);
}