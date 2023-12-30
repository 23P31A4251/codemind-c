#include<stdio.h>
int main()
{
    int a=0,b=0,i,j,c=0,d,e=0;
    char str[1000],str1[1000],str2[1000],str3[1000],str4[1000]={0};
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
         if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            str2[b]=str[i];
            str4[i]=str[i];
            b++;
            continue;
        }
      str1[a]=str[i];
      a++;
    }
    for(i=0;str2[i]!=NULL;i++)
    {
        str3[i]=str2[b-i-1];
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str4[i]==0)
        {
            printf("%c",str1[c]);
            c++;
        }
        else
        {
        printf("%c",str3[e]);
        e++;
        }
    }
}