#include<stdio.h>
int main()
{
    int a,red,c,d,blue,cr,cb,h,f,g,i;
    scanf("%d%d%d%d%d",&a,&red,&cr,&cb);
    blue=a-red;
    f=a*cr;
    h=red*cr;
    i=blue*cb;
    g=h+i;
    if(f<g)
    printf("%d",f);
    else 
    printf("%d",g);
    
}