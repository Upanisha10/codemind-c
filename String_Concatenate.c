#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100],A[100],temp;
    int len,i,j;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",s1);
    strcat(s,s1);
    strcpy(A,s);
    len=strlen(A);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("%s",A);
    
    
}
