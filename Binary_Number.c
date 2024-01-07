#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b,i,j,c=0,d,e=0,f,g=0,k=1,l=1,h,m=1;
    scanf("%d",&b);
   for(i=0;i<pow(10,b);i++)
   {
       a=0;
       d=i;
       f=i;
       g=0;e=0;
       
        
           
           h=pow(10,l);
           
        while(d!=0)
       {
           d=d/10;
           e++;
       }
       while(f!=0)
       {
           c=f%10;
           f=f/10;
           if(c==1||c==0)
           {
               g++;
           }
       }
            if(i>=h&&e==g)
           {
               m++;
               l++;
           }
           k=m;
       for(j=1;j<=b;j++)
       {
           if(a<b-k&&e==g)
           {
               printf("0");
               a++;
           }
           
          
       }
      
       if(g==e)
       {
           printf("%d
",i);
       }
   }
}