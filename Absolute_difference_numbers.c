#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,c,d,e,f,g;
    scanf("%d%d",&a,&b);
     c=pow(10,b);
     g=a%c;
    while(a!=0)
    {
       a=a/10;
       if(a<c)
       {
           
           break;
       }
       
       
    }
    if(g>a)
    {
        printf("%d",g-a);
    }
    else if(a>g)
    {
        printf("%d",a-g);
    }
    
    
   
}