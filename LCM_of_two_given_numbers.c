#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,e,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        c=i*a;
       for(j=1;j<=b*a;j++)
       {
           e=j*b;
           if(e==c)
           {
               d++;
               break;
           }
       }
       if(e==c)
       {
           break;
       }
        
    }
    if(d==0)
    {
        printf("%d",a*b);
    }
    else
    {
        printf("%d",e);
    }
  
}