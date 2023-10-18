#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    d=a*b;
    e=a+2*c;
    f=b+2*c;
    g=e*f;
    h=g-d;
    y=h*x;
    printf("%d",y);
}