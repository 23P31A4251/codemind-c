#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d",&a);
    if(a>=3&&a<=100)
    {
    for(i=1;i<=a*2-1;i++)
    {
        for(j=1;j<=i;j++)
        {
             if(i>a)
            {
                break;
            }
            printf("*");
           
        }if(i>a)
        {
        for(k=a*2-i;k>0;k--)
        {
            printf("*");
        }
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
}