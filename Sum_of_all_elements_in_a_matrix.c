#include<stdio.h>
int main()
{
    int b,c,d=0,e,f,i,j;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            d=d+a[i][j];
        }
    }
    printf("%d",d);
}