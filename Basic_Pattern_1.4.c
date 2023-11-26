#include<stdio.h>
int main()
{
    int a,i,b;
     int j;
    scanf("%d",&a);
    b=65+a-1;
    for(i=1;i<=a;i++)
    {
        for(j=65;j<=b;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}