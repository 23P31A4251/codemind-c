#include<stdio.h>
int main()
{
    int b,c,d,i,e,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(j=0;j<b;j++)
    {
        d=a[j];
        if(c==d)
        {
            printf("True");
            e++;
            break;
        }
    }
    if(e==0)
    {
        printf("False");
    }
}