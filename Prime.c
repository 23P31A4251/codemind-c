#include<stdio.h>
int main()
{
    int a,b=0,c,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            b++;
            break;
        }
    }
    if(b==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}