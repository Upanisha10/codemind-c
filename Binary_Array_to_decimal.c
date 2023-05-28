#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int k = 0;
    for(int i=0; i<n; i++)
    {
       scanf("%d",&a[i]); 
    }
    for(int i=0; i<n; i++)
    {
        k = k*2+a[i];
    }
    printf("%d",k);
}