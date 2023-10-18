#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    scanf("%d%d",&a,&b);
    x=a+b;
    c=21-x;
    if(c>0&&c<11)
    printf("%d",c);
    else
    printf("-1");
}