#include<stdio.h>
int main()
{
    int b,c,d=0,e=0,i,j,s=0,k,l,f=0;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<b;k++)
    {
        s=0;
        for(l=0;l<c;l++)
        {
            s=s+a[k][l];
        }
        if(e<s)
        {
            e=s;
        }
    }
   printf("%d",e);
    
}