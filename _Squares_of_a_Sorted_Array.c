#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=pow(a[i],2);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[j]<b[i])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",b[i]);   
    }
    
}