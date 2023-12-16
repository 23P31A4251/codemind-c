#include<stdio.h>
int main()
{
    int b,c=0,d,i,j=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        }
        for(i=0;i<b;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
            if(a[i]==0||i==b-1)
            {
                d=c;
                c=0;
                if(j<d)
            {
                j=d;
            }
            }
            
        }
        printf("%d ",j);
}