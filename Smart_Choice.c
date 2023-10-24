#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d%d",&a,&b);
    c=a*2;
    f=500-c;
    d=a+b;
    e=d*4;
    g=1000-e;
    h=1000-b*4;
    i=500-2*d;
    j=f+g;
    k=i+h;
    if(j>k)
    printf("%d",j);
    else
    printf("%d",k);
    
}