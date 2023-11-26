#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d",&a);
    b=65;
    for(i=a;i>0;i--)
    {
        b=65;
        for(j=1;j<=i;j++)
        {
           printf("%c ",b); 
           b++;
        }
        printf("
");
        
    }
}