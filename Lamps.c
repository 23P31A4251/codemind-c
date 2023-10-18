#include<stdio.h>
int main()
{
    int n,r,x,y,b,f,g,h;
    scanf("%d%d%d%d",&n,&r,&x,&y);
    b=n-r;
    g=n*x;
   f=r*x+b*y;
    if(x<y)
    printf("%d",g);
    else
    printf("%d",f);
    
    
    
}