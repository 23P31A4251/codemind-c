#include<stdio.h>
int main()
{
    long long int a=0,b,i,d,j=0;
    char str[2000];
    scanf("%s%lld",&str,&b);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
        j++;
    }
    d=a*(b/j);
    for(i=0;i<b%j;i++)
    {
        if(str[i]=='a')
        {
        d++;
        }
    }
    printf("%lld",d);
}