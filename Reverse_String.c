#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,i,j,d,f;
    char str[1000];
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
        b++;
    }
    d=c;
    f=c;
    for(i=0;i<=d;i++)
    {
            a=0;
          
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]==' ')
            {
                a++;
            }
            if(a==c&&str[j]!=' ')
            {
                printf("%c",str[j]);
            }
        }
         if(c!=0)
        {
            printf(" ");
        }
        c--;
        
    }
    
}