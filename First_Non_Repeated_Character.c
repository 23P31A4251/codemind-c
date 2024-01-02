#include<stdio.h>
int main()
{
    int a,b,i,j,d=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        char str[b],c[1000]={0};
        scanf("%s",&str);
        d=0;
        for(j=0;str[j]!=NULL;j++)
        {
            c[str[j]]++;
        }
       for(j=0;str[j]!=0;j++)
       {
           if(c[str[j]]==1)
           {
               printf("%c
",str[j]);
               d++;
               break;
           }
       }
        if(d==0)
        {
            printf("-1
");
        }
    }
}