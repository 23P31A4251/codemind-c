#include<stdio.h>
int main()
{
    int c,i,d=0,b;
    scanf("%d",&b);
   int a[b];
    for(i=1;i<=b;i++)
    {
        scanf("%d",&a[b]);
        d=d+a[b];
    }
    printf("%d",d);
}