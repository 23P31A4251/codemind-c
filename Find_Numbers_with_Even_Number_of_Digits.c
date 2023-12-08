#include<stdio.h>
int main()
{
    int b,c,d,i,j,e=0,f=0,k=0;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        c=a[i];
        j=a[i];
        f=0;
        e=0;
        while(j!=0)
        {
            j=j/10;
            f++;
        }
        if(f%2==0)
        {
           k++;
        }
    }
    printf("%d",k);
}