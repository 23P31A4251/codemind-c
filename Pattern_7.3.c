#include<stdio.h>
int main()
{
    int a,b,i,j,k,c;
    scanf("%d",&a);
    b=a;
    c=a;
    for(i=a;i>0;i--)
    {
        b=c;
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",b);
            b--;
        }
        printf("
");
        c--;
    }
}