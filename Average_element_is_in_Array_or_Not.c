#include<stdio.h>
int main()
{
    int b,c=0,i,e,f=0,j;
    int d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    d=c/b;
    for(j=0;j<b;j++)
    {
    	e=a[j];
    	if(d==e)
    	{
    		printf("True");
    		f++;
    		break;
		}
	}
	if(f==0)
	{
		printf("False");
	}
}