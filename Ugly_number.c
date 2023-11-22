#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a!=1)
    {
        if(a%5==0)
        {
            a/=5;
        }
        else if(a%3==0)
        {
           a/=3; 
        }
        else if(a%2==0)
        {
            a/=2;
        }
        else
        {
            b++;
            break;
        }
    }
    if(b==0)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}