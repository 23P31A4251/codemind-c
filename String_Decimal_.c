#include<stdio.h>
int main()
{
    int a,b=0,i,j,e=0;
    char str[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s",&str);
        b=0;e=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>='0'&&str[j]<='9')
            {
                b++;
            }
            e++;
        }
        if(e==b)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}