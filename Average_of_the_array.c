#include<stdio.h>
int main()
{
    int b,c=0,i;
    float d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    d=c/(float)b;
    printf("%.2f",d);
}