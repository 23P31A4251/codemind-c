#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);
   c=a/b;
   d=c*b;
   e=a-d;
   f=c+e;
   if(b>a)
   printf("%d",a);
   else if(a%b==0)
   printf("%d",c);
   else
   printf("%d",f);
    
}