#include<stdio.h>
int main()
{
   long long int b,c,d=0,e,i,j;
    scanf("%lld%lld",&b,&c);
    long int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%lld",&a[i][j]);
        }
    }
    scanf("%lld",&e);
   for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            if(e==a[i][j])
            {
                d++;
            }
        }
    }
    if(d==0)
    {
        printf("0");
    }
    else if(d!=0)
    {
        printf("1");
    }
}