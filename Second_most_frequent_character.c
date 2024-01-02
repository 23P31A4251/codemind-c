#include<stdio.h>
int main()
{
    int a=0,b=0,c[1000]={0},e,d,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        c[str[i]]++;
    }
    for(i=65;i<=122;i++)
    {
        if(c[i]>c[a])
        {
            b=a;
            a=i;
        }
        else if(c[i]>c[b]&&c[i]!=c[a])
        {
            b=i;
        }
    }
    if(b!=0)
    {
        printf("%c",b);
    }
    else
    {
        printf("-1");
    }
}