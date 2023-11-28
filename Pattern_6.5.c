#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
   b=65;
    for(i=a;i>0;i--)
    {
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%c ",b);
        }
        printf("
");
        b++;
    }
}