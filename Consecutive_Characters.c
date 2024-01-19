#include<stdio.h>
int main()
{
    int i,a=0,b=0;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==str[i+1])
        {
            a++;
        }
        else
        {
            a=1;
        }
        if(b<a)
        {
            b=a;
        }
    }
    printf("%d",b);
}