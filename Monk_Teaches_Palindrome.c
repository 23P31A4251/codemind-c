#include<stdio.h>
int main()
{
    int a,b,i,j,d=0,e;
    char str[1000],c[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s",&str);
        b=0;d=0;
        for(j=0;str[j]!=NULL;j++)
        {
            b++;
        }
        e=b-1;
        for(j=0;str[j]!=NULL;j++)
        {
            c[j]=str[e];
            e--;
        }
        for(j=0;str[j]!=NULL;j++)
        {
            if(c[j]!=str[j])
            {
                d++;
            }
        }
        if(d==0&&b%2==0)
        {
            printf("YES EVEN
");
        }
        else if(d==0&&b%2!=0)
        {
            printf("YES ODD
");
        }
        else
        {
            printf("NO
");
        }
    }
}