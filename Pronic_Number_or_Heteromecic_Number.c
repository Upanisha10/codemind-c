#include<stdio.h>
int main()
{
    int n;
    int d = 0;
    scanf("%d",&n);
    for(int i=1; i<=(n/2); i++)
    {
        if(n == (i+1)*i)
        {
            d = 1;
            break;
        }
    }
    if(d == 0) printf("NO");
    else printf("YES");
}