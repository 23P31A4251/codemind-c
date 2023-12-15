#include<stdio.h>
int main()
{
    int a,i,j,b;
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==i||j==a-i+1)
            {
                printf("%d",b);
            }
            else
            {
                printf(" ");
            }
        }
        b--;
        printf("
");
    }
}