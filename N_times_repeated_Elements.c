#include<stdio.h>
int main()
{
    int b,c,d=0,e,i,j;
    scanf("%d",&b);
    int a[b];
    int A[100000]={0};
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);;
    for(i=0;i<b;i++)
    {
        A[a[i]]++;
    }
    for(j=1;j<=b;j++)
    {
        if(A[j]==c)
        {
            printf("%d ",j);
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}