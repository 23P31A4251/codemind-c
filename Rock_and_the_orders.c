#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,a,b,x,y;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    a=a1+a2+a3;
    b=b1+b2+b3;
    x=a+b+d*2;
    y=a+b+c;
    if(a>=150&&b>=150&&y<x)
    printf("YES");
    else if((a>=150||b>=150)&&c<d)
    printf("YES");
    
    else
    printf("NO");
}