#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
      printf("%c",str[i]);  
    }
}