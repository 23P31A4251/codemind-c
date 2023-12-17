#include<stdio.h>
int main()
{
    char str[10000];
    int c=1,i;
    scanf("%[^
]",&str);
 for (i = 1;str[i]!=NULL; i++) 
    { 
        if (str[i] >= 65 && str[i] <= 91) 
        {
            c++; }
    } 
    printf("%d",c);
}