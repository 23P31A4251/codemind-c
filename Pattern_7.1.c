#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("
");
    }
}