#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,f,e,g,h,i;
    scanf("%d",&a);
    e=a;
    while(e>2)
    {
        d=b+c;
        b=c;
        c=d;
        e--;
        if(d<a)
        {
            g=a-d;
            h=d;
        }
        if(d>a)
        {
           f=d-a;
           i=d;
           break;
        }
       
    }
    if(g<f)
    {
        printf("%d",h);
    }
    else if(g>f)
    {
        printf("%d",i);
    }
    else if(g==f)
    {
        printf("%d %d",h,i);
    }
}