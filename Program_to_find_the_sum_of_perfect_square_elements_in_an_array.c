#include<stdio.h>
int main()
{
    int b,c=0,d=1,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        d=d*a[i];
    }
    for(i=0;i<b;i++)
    {
        for(j=1;j<=d;j++)
        {
            if(j*j==a[i])
            {
                c=c+a[i];
                break;
            }
        }
    }
    printf("%d",c);
}