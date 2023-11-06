#include<stdio.h>
int main()
{
    int i=1,a;
    while(i>=1)
    {
scanf("%d",&a);
if(a!=-1)
{
    i=a*a;
    printf("%d
",i);
}
else
{
    break;
}
i++;
    }
}