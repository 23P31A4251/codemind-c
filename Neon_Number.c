#include<stdio.h>
int main()
{
    int a,b,i,c,d,e=0,f;
    scanf("%d",&a);
    f=a;
    a=a*a;
    while(a!=0)
    {
        b=a%10;
         a=a/10;
        e=e+b;
       
    }
    if(f==e)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}