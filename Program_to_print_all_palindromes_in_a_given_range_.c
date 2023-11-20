#include<stdio.h>
int main()
{
    int a,b,c,i,d,e;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i;
        e=0;
        while(c!=0)
        {
           d=c%10;
           c=c/10;
           e=e*10+d;
        }
        if(i==e)
        {
            printf("%d ",i);
        }
    }
}