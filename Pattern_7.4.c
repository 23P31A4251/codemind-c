#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    b=65+a-1;
    for(i=a;i>0;i--)
    {
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c ",b);
        }
        printf("
");
        b--;
    }
}