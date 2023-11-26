#include<stdio.h>
int main()
{
    int a,b,i,c;
    int j;
    scanf("%d",&a);
    b=65+a-1;
    for(i=1;i<=a;i++)
    {
        c=65;
        for(j=1;j<=i;j++)
        {
            
            printf("%c ",c);
            c++;
        }
        printf("
");
    }
}