#include<stdio.h>
int main()
{
    int a,b=0,i,j;
    char str[1000],c[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]%2!=0)
        {
          a=str[i]-'0';
          a=a*a;
          printf("%d",a);
        }
    }
    
}