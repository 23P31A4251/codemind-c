#include<stdio.h>
#include<math.h>
int main()
{
    int b,c=0,d,e=0,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=b-1;i>=0;i--)
    {
         d=pow(2,e);
        d=d*a[i];
        d=d*a[i];
       c=c+d;
        e++;
    }
    printf("%d",c);
   
   
    
}