#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c,d;
    scanf("%s%s",&a,&b);
    c=strcmp(a,b);
    if(c==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}