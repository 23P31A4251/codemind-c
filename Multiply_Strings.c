#include<stdio.h>
int main()
{
    char str[110],str1[110];
  long long  int a=0,b=0,c,i,j;
    scanf("%s%s",&str,&str1);
    for(i=0;str[i];i++)
    {
        a=10*a+str[i]-48;
    }
    for(i=0;str1[i];i++)
    {
        b=10*b+str1[i]-48;
    }
    c=a*b;
    printf("%lld",c);
}