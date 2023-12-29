#include<stdio.h>
int main()
{
    int a,b=0,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[0]=='0')
        {
            break;
        }
        else
        {
            b++;
        }
    }
    if(b==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}