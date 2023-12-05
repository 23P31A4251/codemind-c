#include<stdio.h>
int main()
{
    int b,c=0,d,i,j,e=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
       if(a[i]%2!=0)
       {
           printf("%d ",a[i]);
       }
    }
   
    for(j=0;j<b;j++)
    {
        if(a[j]%2==0)
        {
            printf("%d ",a[j]);
        }
    }
}