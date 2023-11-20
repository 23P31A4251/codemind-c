#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,d,e=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0) 
           {
               c++;
           }
        }
       if(c==9)
       {
    printf("%d ",i);
    e++;
       }
    }
    printf("
Total=%d",e);
}