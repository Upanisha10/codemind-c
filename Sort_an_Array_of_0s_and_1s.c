#include<stdio.h>
int main()
{
    int n,i,c=0,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    b=n-c;
    for(i=1;i<=b;i++)
    {
        printf("1 ");
    }
}