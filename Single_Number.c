#include<stdio.h>
int main()
{
    int b,c,d=0,e=0,i,j,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<b;j++)
    {
        d=0;
        for(k=0;k<b;k++)
        {
            if(a[j]==a[k])
            {
                d++;
            }
        }
        if(d<=1)
        {
            printf("%d ",a[j]);
        }
    }
}