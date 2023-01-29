#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,d=strlen(str),max=str[0];
    for(i=1;i<=d;i++)
    {
       if(str[i]>max)
       {
           max=str[i];
       }
    }
    printf("%c",max);
}