#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        scanf("%s",str);
        int d=strlen(str),i,c=0;
        for(i=1;i<=d;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
        }
        if(c==(d-1)) printf("True
");
        else printf("False
");
    }
}