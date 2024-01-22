#include<stdio.h>
int main()
{
    int b,c,d=0,f=0,e,i,j;
    scanf("%d",&c);
    for(j=0;j<c;j++)
    {
        f=0;
        d=0;
        scanf("%d",&b);
    int a[b-1];
        for(i=0;i<b-1;i++)
        {
            scanf("%d",&a[i]);
            d=d+a[i];
        }
        for(i=1;i<=b;i++)
        {
            f=f+i;
        }
       printf("%d
",f-d);
    }
}