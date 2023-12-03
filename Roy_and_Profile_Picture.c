#include<stdio.h>
int main()
{
    int a,l,w,h,i;
    scanf("%d%d",&l,&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if((w>l&&w!=h)||(h>l&&w!=h))
        {
            printf("CROP IT
");
        }
        else
        {
            printf("ACCEPTED
");
        }
    }
}