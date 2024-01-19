#include<stdio.h>
int main()
{
    int i,j,c[1000]={0},b=0,d=0,e=0,a[1000];
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        c[str[i]]++;
    }
    for(i=65;i<=122;i++)
    {
        if(c[i]!=0)
        {
            a[d]=c[i];
            d++;
        }
    }
    for(i=0;i<d;i++)
    {
         if(a[i]==a[i+1])
            {
                b++;
            }
            else
            {
               b=0;
            }
             if(b>e)
                {
                    e=b;
                }
        }
    
   if(d-1==e||e==d-2)
   {
       printf("Valid String");
   }
   else
   {
       printf("Not Valid");
   }
}