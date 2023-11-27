#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a-i;j>0;j--)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        
        printf("
");
    }
}