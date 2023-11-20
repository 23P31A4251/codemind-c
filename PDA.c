#include<stdio.h>
int main()
{
    int a,b=0,i,c;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            b=b+i;
        }
    }
    if(b==a)
    {
        printf("PERFECT");
    }
    else if(b<a)
    {
        printf("DEFICIENT");
    }
    else if(b>a)
    {
        printf("ABUNDANT");
    }
}