#include<stdio.h>
int main()
{
    int a,b,c=0,d,i,e,f,g,j;
    scanf("%d",&a);
    for(i=1;i>0;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            if(i<a)
            {
                d=i;
            }
            else
            {
              e=i;
              break;
            }
        }
    }
    f=a-d;
    g=e-a;
   
     if(f<g)
    {
        printf("%d",f);
    }
    else if(f>g)
    {
        printf("%d",g);
    }
    else if(f==g)
    {
        printf("%d",f);
    }
}