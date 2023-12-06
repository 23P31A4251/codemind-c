#include<stdio.h>
int main()
{
    int b,c,d,e,i,j,k,x=0,y=0,p,o;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<b;j++)
    {
        c=a[j];
        x=0;
        for(k=j+1;k<b;k++)
        {
            if(c<a[k])
            {
                e=k-j;
                printf("%d ",e);
                x++;
                break;
            }
        }
         if(x==0)
            {
                printf("0 ");
            }
    }
}