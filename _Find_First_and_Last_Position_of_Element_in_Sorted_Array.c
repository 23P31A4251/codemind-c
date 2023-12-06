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
    scanf("%d",&c);
    for(j=0;j<b;j++)
    {
        if(a[j]==c)
        {
        e=j;
        x++;
        break;
    }
    }
    for(k=b-1;k>=0;k--)
    {
        if(a[k]==c)
        {
        d=k;
        y++;
        break;
    }
    }
    if(x==0&&y==0)
    {
        printf("-1 -1");
    }
    else{
        printf("%d %d",e,d);
    }
}