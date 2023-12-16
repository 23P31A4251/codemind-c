#include<stdio.h>
int main()
{
    int b,d=0,i,j;
    scanf("%d",&b);
    int a[b];
    int c[b]={0};
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
       c[a[i]]++;
    }
    for(j=1;j<b;j++)
    {
        if(c[j]==j)
        {
            d++;
        }
    }
    
         printf("%d",d);
}