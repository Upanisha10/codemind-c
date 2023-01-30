#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        if(n==(i*i))
        {
            flag=1;
            break;
        }
    }
    if(flag) printf("True");
    else printf("False");
}