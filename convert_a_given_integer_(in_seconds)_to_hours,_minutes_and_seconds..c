#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/3600;
    c=a/60-b*60;
    d=a-b*3600;
    d=d-c*60;
    printf("H:M:S-%d:%d:%d",b,c,d);
}