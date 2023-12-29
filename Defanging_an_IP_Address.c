#include<stdio.h>
int main()
{
    int a,b,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='.')
        {
            printf("[%c]",str[i]);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}