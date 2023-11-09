#include<stdio.h>
int main()
{
    int a,b,d=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b>d)
        {
            d=b;
        }
    }
    printf("%d",d);
}