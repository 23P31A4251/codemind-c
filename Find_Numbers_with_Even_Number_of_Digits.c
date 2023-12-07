#include<stdio.h>
int main()
{
    int b,c,d=0,i,k=0,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        d=0;
        scanf("%d",&a[i]);
        c=a[i];
        while(c!=0)
        {
            c=c/10;
            d++;
        }
        if(d%2==0)
        {
            k++;
        }
    }
    printf("%d",k);
    
}