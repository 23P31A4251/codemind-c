#include<stdio.h>
int main()
{
    int a=0,b=0,i,j;
    char str[10000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        b=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j]&&j!=i)
            {
                b++;
                break;
            }
        }
       if(b==0)
       {
           printf("%d",i);
           a++;
           break;
       }
       
    }
    if(a==0)
    {
        printf("-1");
    }
}