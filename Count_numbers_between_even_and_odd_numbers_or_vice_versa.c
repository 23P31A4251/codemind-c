#include<stdio.h>
int main()
{
    int i,j,b,c=0,d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<b-1;i++)
    {
        if(a[i-1]%2!=0&&a[i+1]%2==0)
        {
            c++;
        }
        if(a[i-1]%2==0&&a[i+1]%2!=0)
        {
            c++;
        }
        
    }
    printf("%d",c);
}