#include<stdio.h>
int main()
{
    int b,c=0,d,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            c=i;
        }
    }
    printf("%d",c);
}