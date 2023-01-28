#include<stdio.h>
int main()
{
    int n,i,d,k,c,b,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            {
              flag=0;
              printf("False");
              break;
            }
            else
            flag=1;
        }
    }
    if(flag) 
    {
        printf("True");
    }
}