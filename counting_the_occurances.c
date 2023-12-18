#include<stdio.h>
int main()
{
    char str[1000],b;
    int a=0,i;
    scanf("%[^
]%s",&str,&b);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==b)
        {
            a++;
        }
    }
    if(a!=0)
    {
        printf("%d",a);
    }
    else
    {
        printf("-1");
    }
}