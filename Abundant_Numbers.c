#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            b=b+i;
        }
    }
    if(b>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}