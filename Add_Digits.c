#include<stdio.h>
int main()
{
    int a,b,c,d=0,e,f=0,g,h=0;
    scanf("%d",&a);
    c=a;
    while(c!=0)
    {
        b=c%10;
        c=c/10;
        d=d+b;
        
            
    }
    while(d!=0)
            {
                e=d%10;
                d=d/10;
                f=f+e;
            }
        if(f>=10)
        {
            while(f!=0)
            {
                g=f%10;
                f=f/10;
                h=h+g;
            }
            printf("%d",h);
        }
        else
        {
     printf("%d",f);
        }

}