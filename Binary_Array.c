#include<stdio.h>
int main()
{
    int b,c=0,d,e,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1)
        {
            c++;
        }
    }
    if(c!=b)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}