#include<stdio.h>
int main()
{
    int a=0,b=0,i,j[1000],c=0;
    char str[1000];
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        b++;
    }
    for(i=b-1;i>=0;i--)
    {
        j[a]=str[i];
        a++;
    }
    for(i=0;i<b;i++)
    {
      if(str[i]!=j[i])
      {
          c++;
      }
    }
    if(c==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}