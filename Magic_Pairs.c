#include<stdio.h>
int main()
{
    int a,b,d;
    float c;
    scanf("%d",&a);
    b=(a*a)/2;
    c=(a*a)/2.0;
    d=c;
    if(a%2==0)
    printf("%d",b);
    else
    printf("%d",d);
}