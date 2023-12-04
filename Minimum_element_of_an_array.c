#include<stdio.h>
int main()
{
    int b,c=10,d,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(c>a[i])
        {
            c=a[i];
        }
    }
    printf("%d",c);
}