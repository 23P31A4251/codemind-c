#include<stdio.h>
int main()
{
    int a,b,i,d;
    scanf("%d%d",&a,&b);
    for(i=0;i<=a*b;i++)
    {
        d=i+a;
        if(d%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}