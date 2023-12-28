#include<stdio.h>
int main()
{
    int b,c,d,f,i,j;
    scanf("%d",&b);
    int a[b];
    c=b;
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=b/2;i++)
    {
        	if(b%2==0&&i==b/2)
    	{
    		break;
		}
        if(b%2!=0&&i==b/2)
        {
            printf("%d 0",a[i]);
        }
        else
        {
            printf("%d %d ",a[i],a[c-1]);
        }
        c--;
    }
}