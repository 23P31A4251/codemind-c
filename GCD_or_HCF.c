#include<stdio.h>
int main()
{
    int a,b,c,i,j,d,e=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(j=1;j<=b;j++)
            {
                if(b%j==0)
                {
                    if(i==j)
                    {
                        if(j>e)
                        {
                       e=j;
                       break;
                        }
                    }
                }
            }
        }
    }
   printf("%d",e);
}