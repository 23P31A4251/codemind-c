#include<stdio.h>
int main()
{
    char str[1000],b;
    int i,j,a,c,d;
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]%2!=0)
        {
        	c=str[i]-48;
        	d=c;
          printf("%d",d*d);
        }
    }
}