#include<stdio.h>
int main()
{
    char str[1000];
    int a=0,i;
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65&&str[i]<=95)
        {
            a++;
        }
    }
    printf("%d",a);
}