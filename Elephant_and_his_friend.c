#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a/5;
    if(a<=5)
    printf("1");
    else if(a%5==0)
    printf("%d",b);
    else
    printf("%d",++b);
    
}