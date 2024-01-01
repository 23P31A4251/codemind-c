#include<stdio.h>
int main()
{
    int a,b=0,c,i,j,k;
    char str[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s",&str);
        b=0;
        for(j=0;str[j]!=NULL;j++)
        {
                if(str[j]==str[j+1])
                {
                    str[j]=str[j+1];
                    b++;
                }
        }
        printf("%d
",b);
    }
    
}