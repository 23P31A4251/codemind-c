#include<stdio.h>
int main()
{
    int b,c=0,d,i,j,k,e;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<b;j++)
    {
        d=a[j];
        if(d%2!=0)
        {
            for(k=j+1;k<b;k++)
            {
                e=a[k];
                if(e%2==0)
                {
                    c++;
                }
            }
        }
        if(e%2!=0)
        {
            break;
        }
    }
    printf("%d",c);
}