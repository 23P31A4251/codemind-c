#include<stdio.h>
int main()
{
    int a,b,c,i,j,d;
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("0");
    }
    else if(a<b)
    {
        c=b-a;
        i=c/10;
        if(c%10==0)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d",++i);
        }
    }
    else if(a>b)
    {
        d=a-b;
        j=d/10;
        if(d%10==0)
        {
            printf("%d",j);
        }
        else
        {
            printf("%d",++j);
        }
    }
}