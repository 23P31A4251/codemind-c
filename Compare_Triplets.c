#include<stdio.h>
int main()
{
    int c=0,d=0,e,i,j;
    int a[3];
    int b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        else if(b[i]>a[i])
        {
            d++;
        }
    }
    printf("%d %d",c,d);
}