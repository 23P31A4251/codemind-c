#include<stdio.h>
int main()
{
    int a,b,i,c,j,k;
    scanf("%d",&a);
    b=65;
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
        b++;
    }
}