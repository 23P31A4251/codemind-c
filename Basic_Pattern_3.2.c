#include<stdio.h>
int main()
{
    int a,i,j,b=1;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%d ",b);
            
        }
        printf("
");
        b++;
    }
}