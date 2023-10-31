#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    b=a%10;
    while(a>=10)
    {
   a=a/10;
    }
    int c=a+b;
    printf("%d",c);
}