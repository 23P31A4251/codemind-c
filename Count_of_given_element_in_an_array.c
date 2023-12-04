#include<stdio.h>
int main()
{
    int b,c,d,e=0,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(j=0;j<b;j++)
    {
        d=a[j];
        if(c==d)
        {
           e++; 
        }
    }
    printf("%d",e);
}