#include<stdio.h>
int main()
{
    int a,i;
    float b,c=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        b=1/(i+1.0);
        c=c+b;
    }
    printf("%.2f",c);
}