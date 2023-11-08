#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c=c*10+b;
    }
    if(c==d)
    printf("True");
    else
    printf("False");
}