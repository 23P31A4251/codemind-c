#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
            {
        for(j=1;j<=a;j++)
        {
            printf("1 ");
        }
        printf("
");
            }
            else
            {
               for(k=1;k<=a;k++)
               {
                   printf("0 ");
               }
               printf("
");
            }
    }
}