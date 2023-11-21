#include<stdio.h>
int main()
{
    int a,b=0,c=1,d,e,f=0;
    scanf("%d",&a);
    e=a;
    do{
        d=b+c;
        b=c;
        c=d;
        e--;
        if(a==d){
            f++;
            break;
        }
    }while(e>0);
    if(f==1){
        printf("True");
    }
    else
    {
        printf("False");
    }
}
