#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a-b;
    if(b%2!=0&&c%2!=0)
    {
        printf("YES");
    }
    else if(b%2==0&&c%2==0)
    {
        printf("YES");
    }
    else if(a%2==0&&b%2==0)
    {
        printf("YES");
    }
    else if(a%2!=0&&b%2!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}