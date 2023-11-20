#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,d;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=0;
        d=0;
        scanf("%d",&b);
        c=sqrt(b);
        d=c*c;
        if(b==d)
        {
            printf("True
");
        }
        if(b!=d)
        {
            printf("False
");
        }
    }
}