#include<stdio.h>
int main()
{
    int b,c=0,d,i,j,e;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
        }
    }
    if(c==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}