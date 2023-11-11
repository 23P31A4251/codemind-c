#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,e,f=0;
    scanf("%d",&a);
    e=a;
   do
   {
       d=b+c;
       b=c;
       c=d;
       e--;
       if(a==d||a==0||a==1)
       {
           f++;
           break;
       }
       
   }while(e>0);
   if(f!=0)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}