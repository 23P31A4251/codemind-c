#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/10;
    if(a%10==0)
    printf("%d",b);
    else if(a%5==0)
    printf("%d",++b);
    else
    printf("-1");
    
    
}