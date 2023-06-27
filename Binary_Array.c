#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int t = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] != 0 && a[i] != 1)
        {
            t = 1;
            break;
        }
    }
    if(t == 1) printf("False");
    else printf("True");
}