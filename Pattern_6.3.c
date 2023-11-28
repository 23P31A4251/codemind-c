#include<stdio.h>
int main()
{
    int a,b,i,j,k,c=1;
    scanf("%d",&a);
    b=a;
    for(i=0;i<=a-1;i++)
    {
        b=a;
        b=b-i;
        for(j=a-c;j>0;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",b);
            b++;
        }
        printf("
");
       
        c++;
    }
}