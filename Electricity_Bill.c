#include<stdio.h>
int main()
{
    int a;
    float b,c,d,e,f,g,h,i,j,k,x,y,z,X,Y,A,B,C,D;
    scanf("%d",&a);
    x=1.2;
    y=1.4;
    z=1.6;
    X=1.8;
    Y=2.0;
    g=0;
    h=0;
    b=a*1.2;
    c=a*1.4;
    d=a*1.6;
    e=a*1.8;
    f=a*2.0;
    i=(d*15)/100.0;
    j=(e*15)/100.0;
    k=(f*15)/100.0;
    A=d+i;
    B=e+j;
    C=f+k;
    if(a<199)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,x,b,g,b);
    else if(a<400)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,y,c,h,c);
    else if(a<600)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,z,d,i,A);
    else if(a<800)
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,X,e,j,B);
    else
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,Y,f,k,C);
    
}