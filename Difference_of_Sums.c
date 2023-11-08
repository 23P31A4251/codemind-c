#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d=0,e,i=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=pow(i,2);
        c=c+b;
        d=d+i;
    }
    d=pow(d,2);
    
    printf("%d",d-c);
    
}
