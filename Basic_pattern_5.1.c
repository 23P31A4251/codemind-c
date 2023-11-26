#include<stdio.h>
int main()
{
    int a,b=1,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",b);
        }
        for(k=a-i;k>0;k--)
        {
            printf("*");
        }
        printf("
");
        b++;
    }
}