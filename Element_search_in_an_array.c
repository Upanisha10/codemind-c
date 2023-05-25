#include<stdio.h>
int search(int *a,int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1; 
}
int main()
{
    int n,key;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int ind = search(a,n,key);
    if(ind == -1) printf("False");
    else printf("True");
}