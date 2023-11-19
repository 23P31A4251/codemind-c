#include<stdio.h>
int main()
{
    int a,b,c,i,e,d;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i;
        e=1;
        while(c>0)
        {
            d=c%10;
            if(d==0||i%d!=0)
            {
                e=0;
                break;
            }
            else
            {
                c=c/10;
            }
        }
        if(e==1)
        {
            printf("%d ",i);
        }
    }
}