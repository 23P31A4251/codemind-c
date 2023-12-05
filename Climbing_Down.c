#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a/(float)c<b/(float)d)
    {
        printf("Walter");
    }
    else if(a/(float)c>b/(float)d)
    {
        printf("Jesse");
    }
    else
    {
        printf("Both");
    }
}