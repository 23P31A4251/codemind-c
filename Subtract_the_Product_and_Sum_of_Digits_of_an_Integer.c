#include<stdio.h>
int main()
{
    int a,b,c=1,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c=c*b;
        d=d+b;
    }
    if(c>d)
    {
        printf("%d",c-d);
    }
    else
    {
        printf("%d",d-c);
    }
}