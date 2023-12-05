#include<stdio.h>
int main()
{
    int b,c=0,d,i,j,e=0,x,y,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
   scanf("%d%d",&x,&y);
    for(j=0;j<b;j++)
    {
        if(a[j]>=x&&a[j]<=y)
        {
           continue;
        }
         printf("%d ",a[j]);
         e++;
    }
   if(e==0)
   {
       printf("-1");
   }
}