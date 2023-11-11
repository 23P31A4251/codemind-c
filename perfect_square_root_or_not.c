#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        b=i*i;
        if(a==b)
        {
           c++;
           break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}