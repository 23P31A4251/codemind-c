#include<stdio.h>
int main()
{
    int i=2,a,temp=0;
    scanf("%d",&a);
    while(i<a)
    {
        if(a%i==0)
        {
            temp++;
            break;
        }
        i++;
    }
    if(temp==0&&a!=1)
    {
        printf("Prime");
    }
    else
    {
    printf("Not Prime");
}
    
}