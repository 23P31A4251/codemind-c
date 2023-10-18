#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
   d=b*c;
   e=a%d;
   f=a/d;
   if(e==0)
   printf("%d",f);
   else
   printf("%d",++f);
   
}