#include<stdio.h>
int main()
{
    char str[1000];
    int i,b=0;
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            b++;
        }
    }
    printf("%d",b);
}