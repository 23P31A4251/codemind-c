#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    float d=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       d=d+sqrt(i);
    }
    printf("%.2f",d);
}