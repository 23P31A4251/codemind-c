#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        if(a<=2)
        printf("NO");
        else
        printf("YES");
    }
    else
    printf("NO");
}