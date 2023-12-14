#include<stdio.h>
#include<math.h>
int main()
{
    int b,c=0,d=1,e,f,i,j,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        d=d*a[i];
    }
    for(j=1;j>0;j++)
    {c=0;
        for(k=0;k<b;k++)
        {
            if(j%a[k]==0)
            {
                c++;
            }
        }
        if(c==b)
                {
                    printf("%d",j);
                    break;
                }
    }
    
}