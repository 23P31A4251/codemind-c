#include<stdio.h>
int main()
{
    int b,c=0,d,i,j,e=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    d=c/(float)b;
    for(j=0;j<b;j++)
    {
        if(a[j]<=d)
        {
            e++;
        }
    }
    printf("%d",e);
}