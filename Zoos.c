#include<stdio.h>
int main()
{
    char str[10000];
    int i,j=0,a=0;
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            j++;
        }
        if(str[i]=='o')
        {
            a++;
        }
    }
    if(a==2*j)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}