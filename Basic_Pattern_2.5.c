#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    b=65+a;
    for(i=1;i<=a;i++)
    {
        b=65+a;
        b=b-i;
        for(j=1;j<=i;j++)
        {
            printf("%c ",b);
        }
        printf("
");
    }
    
}