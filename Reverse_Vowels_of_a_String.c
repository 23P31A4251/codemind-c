#include<stdio.h>
int main()
{
    int i,j,a=0;
    char str[1000],str1[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            str1[a]=str[i];
            a++;
        }
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            printf("%c",str1[a-1]);
            a--;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    
}