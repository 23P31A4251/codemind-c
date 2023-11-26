#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}