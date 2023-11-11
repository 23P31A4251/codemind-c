#include<stdio.h>
int main()
{
    int a,b=0,c=1,d;
    scanf("%d",&a);
    printf("%d %d ",b,c);
    do
    {
        d=c+b;
        printf("%d ",d);
        b=c;
        c=d;
        a--;
    }while(a>2);
}