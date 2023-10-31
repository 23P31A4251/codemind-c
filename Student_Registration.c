#include<stdio.h>
int main()
{
    int a,n1,m1,k1,n2,m2,k2,b,c;
    scanf("%d%d%d%d%d%d%d",&a,&n1,&m1,&k1,&n2,&m2,&k2);
    b=m1-k1;
    c=m2-k2;
    if(n1<=b)
    printf("YES");
    else
    printf("NO");
    if(n2<=c)
    printf("
YES");
    else
    printf("
NO");
}