#include<stdio.h>
int main()
{
    char str[1000],b;
    int a=0;
    scanf("%[^
]%s",&str,&b);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==b)
        {
            printf("True
%d",i);
            a++;
            break;
        }
        
      
    }
    if(a==0)
    {
        printf("False");
    }
    
}