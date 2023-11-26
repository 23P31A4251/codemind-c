#include<stdio.h>
int main()
{
    int a,j,b;
    int i;
    scanf("%d",&a);
    b=65+a-1;
    for(i=65;i<=b;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}