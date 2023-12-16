#include<stdio.h>
int main()
{
    int b,d,e=0,i,j;
    scanf("%d",&b);
    int a[b];
    int c[b]={0};
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<b;i++)
    {
        if(c[i]==i)
        {
            j=i-1;
            printf("%d ",a[j]);
            e++;
        }
    }
    if(e==0)
    {
        printf("-1");
    }
}