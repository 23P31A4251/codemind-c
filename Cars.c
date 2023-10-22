#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<4)
    printf("1");
    else if(a%4==0)
    printf("%d",a/4);
    else
    printf("%d",(a/4)+1);
}