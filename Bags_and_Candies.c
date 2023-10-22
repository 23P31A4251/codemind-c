#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=c*b;
    e=a/d;
    if(a%d==0)
    printf("%d",e);
    else 
    printf("%d",++e);
}