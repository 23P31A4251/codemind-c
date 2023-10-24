#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(b*(b+1))/2;
    if(c<=a)
    printf("YES");
    else
    printf("NO");
}