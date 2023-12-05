#include<stdio.h>
int main()
{
    int b,c=0,d=0,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0&&a[i]%2==0)
        {
            c++;
        }
        
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}