#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d,e,f=0,g,i=0;
    scanf("%d",&a);
    d=a*a;
    g=a;
    while(g!=0)
    {
        g=g/10;
        i++;
    }
    
    e=pow(10,i);
    b=d%e;
        if(a==b)
        {
          printf("Automorphic Number");
        }
    else
    {
        printf("Not an Automorphic Number");
    }
}