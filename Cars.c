#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/4;
   if(a%4==0)
   printf("%d",b);
   else
   printf("%d",++b);
}