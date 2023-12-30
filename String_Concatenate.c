#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,c[1000]={0};
    char str[1000],str1[1000],str2[1000];
    scanf("%s%s",&str,&str1);
   strcat(str,str1);
   for(i=0;str[i]!=NULL;i++)
   {
      c[str[i]]++;
   }
   for(i=65;i<=122;i++)
   {
       for(j=1;j<=c[i];j++)
       {
           printf("%c",i);
       }
   }
}