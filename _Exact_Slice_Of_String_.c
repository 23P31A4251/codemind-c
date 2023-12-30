#include<stdio.h>
int main()
{
    int a,b,i,j;
    char str[1000];
    scanf("%[^
]",&str);
    scanf("%d%d",&a,&b);
    for(i=0;str[i]!=NULL;i++)
    {
        if(i>=a&&i<=b)
        {
            printf("%c",str[i]);
        }
    }
    
}