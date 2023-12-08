#include<stdio.h>
int main()
{
    int b,c,d,i,k,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<b-1;k++)
                {
                    a[k]=a[k+1];
                }
                b--;
                j--;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
}