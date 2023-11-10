#include<stdio.h>
int main()
{
    int a,b,i,c=0,d=1;
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=c+b;
        d=d*b;
        a=a/10;
    }
    if(c==d)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}