#include<stdio.h>
int main()
{
    int b=0,i,j,c;
    char str[1000];
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%s",&str);
        b=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]>='0'&&str[j]<='9')
            {
                b++;
            }
        }
        if(b!=0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}