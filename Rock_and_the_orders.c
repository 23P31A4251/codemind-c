#include<stdio.h>
int main()
{
    int D,C,A1,A2,A3,B1,B2,B3,a,b,c,d;
    scanf("%d%d%d%d%d%d%d%d",&D,&C,&A1,&A2,&A3,&B1,&B2,&B3);
    a=A1+A2+A3;
    b=B1+B2+B3;
    c=a+b+D*2;
    d=a+b+C;
    if(a>=150&&b>=150&&d<c)
    printf("YES");
    else if((a>=150||b>=150)&&C<D)
    printf("YES");
    else
    printf("NO");
}