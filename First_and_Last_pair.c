#include<stdio.h>
int main()
{
    int b,c,d,i,j,e=1,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=b/2;j++)
    {
        c=a[j];
        for(k=b-e;k>=b/2;k++)
        {
            d=a[k];
            e++;
            if(b%2!=0)
            {
                if(c!=d)
                {
            printf("%d %d ",c,d);
            }
            else
            {
                printf("%d 0 ",c);
            }
            }
            else
            {
                printf("%d %d ",c,d);
            }
            break;
        }
    }
}