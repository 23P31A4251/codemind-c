#include<stdio.h>
int main()
{
    int b,c=0,d=0,e=0,i,j,k;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<b;j++)
    {
        c=0;
      
        for(k=0;k<b;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
        if(c==1)
        {
            if(d<a[j])
            {
                d=a[j];
            }
            e++;
        }
       
    }
    if(e!=0)
    {
    printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}