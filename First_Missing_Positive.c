#include<stdio.h>
int main()
{
    int b,c[1000]={0},d=1000,i,j=-1000;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(d>a[i]&&a[i]>0)
        {
            d=a[i];
        }
        if(j<a[i])
        {
            j=a[i];
        }
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>0)
        {
            c[a[i]]++;
        }
    }
    for(i=1;;i++)
    {
        if(c[i]==0)
        {
            printf("%d",i);
            break;
        }
    }
   
}