#include<stdio.h>
int main()
{
    int b,c=1000,d=0,e,i,j=1000,f=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<b;i++)
    {
        d=a[i];
        for(j=i+1;j<b;j++)
        {
            if(a[j]>d)
            {
                d=a[j];
            }
        }
        printf("%d ",d);
    }
    printf("-1");
}