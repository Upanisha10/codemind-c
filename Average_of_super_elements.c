#include<stdio.h>
int main()
{
    int n,i,j,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    float sum=0,avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            d++;
            sum+=a[i];
            a[i]=0;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",sum/d);
    }
}