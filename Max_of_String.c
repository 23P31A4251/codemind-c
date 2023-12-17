#include<stdio.h>
int main()
{
    char str[1000],a='A';
    int i;
    scanf("%[^
]",&str);
 for (int i = 1;str[i]!=NULL; i++) 
    { 
      
             if(str[i]>a)
            {
                a=str[i];
            }
        
    } 
    printf("%c",a);
}