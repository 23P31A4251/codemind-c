#include<stdio.h>
int main()
{
    int a;
    float b,c,d,e,f,g,h,i,j,gr;
    scanf("%d",&a);
    b=(80*a)/100.0;
    c=(20*a)/100.0;
    d=(90*a)/100.0;
    e=(25*a)/100.0;
    f=(95*a)/100.0;
    g=(30*a)/100.0;
    h=a+b+c;
    i=a+d+e;
    j=a+f+g;
    
    if(a<=10000)
    printf("%.2f",h);
    else if(a<=20000)
    printf("%.2f",i);
    else
    printf("%.2f",j);
    
   
    
}
