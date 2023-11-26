#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d",&a);
    b=65+a-1;
    for(i=a;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",b);
        }
        printf("
");
        b--;
    }
}