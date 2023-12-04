#include<stdio.h>
int main()
{
    int b,c=0,d=0,e,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            c=c+a[i];
        }
        else
        {
            d=d+a[i];
        }
    }
    if(c>d)
    {
        printf("%d",c-d);
    }
    else
    {
        printf("%d",d-c);
    }
}