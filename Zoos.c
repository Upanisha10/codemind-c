#include<stdio.h>
int main()
{
    char str[100];
    int i,x=0,y=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='o')
        {
            x++;
        }
        else y++;
    }
    if(x==(2*y))
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    
}