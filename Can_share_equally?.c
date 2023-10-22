#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=2*b;
    d=a+c;
    if(a==0&&b%2==0)
    printf("YES");
    else if(a==0&&b%2!=0)
    printf("NO");
    else if(d%2==0)
    printf("YES");
    else
    printf("NO");
}