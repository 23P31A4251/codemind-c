#include<stdio.h>
int main()
{
    int a,b=0,c,d,e=0,f,i,j;
    scanf("%d",&a);
    for(i=a+1;i<=100000;i++)
    {
        b=0;
        e=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
               b++; 
               break;
            }
        }
        if(b==0)
        {
            c=i;
            while(c!=0)
            {
                d=c%10;
                c=c/10;
                e=e*10+d;
            }
            
        }
        if(i==e)
            {
            printf("%d
",i);
            break;
            }
    }
}