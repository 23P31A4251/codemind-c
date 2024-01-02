#include<stdio.h>
int main()
{
    int a,b,c[1000]={0},i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        c[str[i]]++;
    }
     
     a=c[85]-c[68];
     b=c[76]-c[82];
     if(a==0&&b==0)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
     
}