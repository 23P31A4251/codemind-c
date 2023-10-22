#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=2*c;
    if(a<=b+d)
    printf("Qualify");
    else
    printf("Not Qualify");
}