#include<stdio.h>
int main()
{
    int b,c,d,e=0,f,i,j,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    int A[c];
    for(j=0;j<b;j++)
    {
        scanf("%d",&A[j]);
    }
    scanf("%d",&d);
    for(k=0;k<b;k++)
    {
        if(a[k]<=d&&A[k]>=d)
        {
            e++;
        }
    }
    printf("%d",e);
}