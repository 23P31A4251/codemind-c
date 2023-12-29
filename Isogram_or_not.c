#include<stdio.h>
int main()
{
    int a=0,b=0,i,j;
    char str[1000],c[1000]={0};
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        c[str[i]]++;
        b++;
    }
    for(i=65;i<=122;i++)
    {
        if(c[i]==1)
        {
            a++;
        }
    }
    if(a==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}