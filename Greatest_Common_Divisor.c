#include<stdio.h>
int main()
{
    int a,b,c=0,d,i,e;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        d=a%i;
        e=b%i;
        if(a%i==0&&b%i==0)
        {
            if(i>c)
            {
            c=i;
            }
        }
       
    }
    printf("%d",c);
}