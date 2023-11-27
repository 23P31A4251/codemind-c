#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
   
    for(i=1;i<=a;i++)
    {
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("* ");
        }
   
        printf("
");
    }
}