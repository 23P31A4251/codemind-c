#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,b;
    scanf("%[^
]",&str);
    b=strlen(str);
    for(i=b-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}