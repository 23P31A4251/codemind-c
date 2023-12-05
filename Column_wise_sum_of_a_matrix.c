#include<stdio.h>
int main()
{
    int b,c,d,e,i,j,k,l;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(j=0;j<c;j++)
    {
        d=0;
        for(i=0;i<b;i++)
        {
          d=d+a[i][j];
           
        }
       printf("%d ",d);
    }
}