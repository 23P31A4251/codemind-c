#include<stdio.h>
int main()
{
    int b,c,d=0,e,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(d<a[i])
        {
            d=a[i];
        }
    }
    scanf("%d",&c);
    for(i=0;i<b;i++)
    {
        e=a[i]+c;
        if(e>=d)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    
}