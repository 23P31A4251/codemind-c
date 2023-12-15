#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int b=65;
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==i||j==a-i+1)
            {
                printf("%c",b);
            }
            else
            {
                printf(" ");
            }
        }
        b++;
        printf("
");
    }
}