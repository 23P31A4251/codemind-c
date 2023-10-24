#include<stdio.h>
int main()
{
    int x,y,p,n,m;
    scanf("%d%d%d",&x,&y,&p);
    n=(y-x)/(2*p);
    
    if((x+n*p==y-n*p)||(x-n*p==y+n*p))
    printf("YES");
    else
    printf("NO");
}