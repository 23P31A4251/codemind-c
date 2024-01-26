#include<stdio.h>
int main()
{
    int b,c=0,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    b+=2;
    a[b-2]=a[0];
    a[b-1]=a[1];
    for(i=0;i<b-2;i++)
    {
        if(a[i]%2==0&&a[i+2]%2!=0)
        {
            c++;
        }
        if(a[i]%2!=0&&a[i+2]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}