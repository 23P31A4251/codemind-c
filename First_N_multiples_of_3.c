#include<stdio.h>
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1;i>0;i++)
    {
        if(i%3==0)
        {
           b++;
           printf("%d ",i);
        }
        if(b==a)
        {
            break;
        }
        
    }
}