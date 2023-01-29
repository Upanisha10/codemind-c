#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,sum=0,len;
    scanf("%[^
]s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            sum=sum+(s[i]-'0');
        }
    }
    printf("%d",sum);
}