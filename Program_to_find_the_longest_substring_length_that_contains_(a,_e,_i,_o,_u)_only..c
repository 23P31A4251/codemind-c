#include<stdio.h>
int main()
{
    int a=0,b=0,c,d,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            a++;
            if(b<a)
            {
                b=a;
            }
        }
        else
        {
            a=0;
        }
    }
    printf("%d",b);
}