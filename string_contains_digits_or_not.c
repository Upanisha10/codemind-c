#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        int i,d,c=0;
        scanf("%s",str);
        d=strlen(str);
        for(i=1;i<=d;i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
        }
        if(c==0) printf("No
");
        else printf("Yes
");
    }
}