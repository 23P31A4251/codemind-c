#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&c);
         f=0;
         
           for(j=b;j<=c;j++)
            {
             
            e=j%10;
            
               if(e==2||e==3||e==9)
               {
                   f++;
               }
             
            }
            printf("%d
",f);
           
    }
}