#include<stdio.h>
int main()
{
    int b,d,i,j,e=0,f=0;
    scanf("%d",&b);
    int a[b];
    int c[100000]={0};
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(e<a[i])
        {
            e=a[i];
        }
    }
    for(i=0;i<b;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<=e;i++)
    {
            d=c[i]/2;
            f=f+d;
    }
    printf("%d",f);
}