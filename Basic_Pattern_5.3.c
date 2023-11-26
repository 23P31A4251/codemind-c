#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(k=a-i;k>0;k--)
        {
            printf("*");
        }
        printf("
");
    }
}