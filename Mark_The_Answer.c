#include<stdio.h>
int main()
{
    int b,c,d,e=0,i,j;
    scanf("%d%d",&b,&c);
    int arr[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr[i]);
       if(arr[i]>c)
       {
           e++;
           continue;
       }
       if(e==2)
       {
           break;
       }
       d++;
    }
    printf("%d",d);
}