#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            a++;
        }
        else
        {
            a=0;
        }
        if(a==1)
        {
            printf("V");
            b=0;
        }
        else if(a==0&&b==0)
        {
            printf("C");
            b++;
        }
    }
}