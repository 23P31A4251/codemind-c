#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j,k,l,g,m;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=c+1;i>0;i++)
    {
        for(j=2;j<i;j++)
        {
            d=0;
            if(i%j==0)
            {
                d++;
                break;
            }
        }
        if(d==0)
        {
            e=i;
            break;
        }
    }
    f=e-c;
    printf("%d",f);
  
    
}