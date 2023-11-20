#include<stdio.h>
int main()
{
    int a,b,c,d,j,e,i,f=0,g,h;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
         scanf("%d%d%d%d",&b,&c,&d,&e);
        f=0;
        for(j=1;j<=b;j++)
        {
            
            if(j%c==0&&j%d!=0||j%c!=0&&j%d==0)
            {
                f++;
            }
        }
         if(f>=e)
    {
        printf("Win
");
    }
    if(f<e)
    {
        printf("Lose
");
    }
    }
   
}