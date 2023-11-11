#include<stdio.h>
int main()
{
    int a,b,c,d,f,e=0,i=0;
    scanf("%d",&a);
    c=a;
    f=a;
    while(c!=0)
    {
        c=c/10;
        i++;
    }
    while(f!=0)
    {
        b=f%10;
        f=f/10;
        if(b%2!=0)
       {
           e--;
       }
       if(b%2==0)
       {
           e++;
       }
    }
   
    if(e==i)
    {
        printf("Even");
    }
    else if(e==-i)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}