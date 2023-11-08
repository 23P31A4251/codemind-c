#include<stdio.h>
int main()
{
    int a,b,c=0,d,e;
    scanf("%d",&a);
    e=a;
   while(a!=0)
   {
       b=a%10;
       a=a/10;
       c=c*10+b;
   }
   if(c==e)
   printf("Palindrome");
   else
   printf("Not Palindrome");
}