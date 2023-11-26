#include<stdio.h>
int main()
{
    int a,i,j,c;
    scanf("%d",&a);
    c=a;
    for(i=0;i<a;i++)
    {
       c=a;
        c=c-i;
        for(j=0;j<=i;j++)
        {
            printf("%d ",c);
            c++;
        }
        printf("
");
    }
}