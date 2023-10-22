#include<stdio.h>
int main()
{
    int a;
    float c,b,s,t;
    scanf("%d",&a);
    if(a<199)
    printf("Units Consumed: %d
Cost per Unit: 1.20
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,a*1.20,0.00,a*1.20);
   else if(a<400)
    printf("Units Consumed: %d
Cost per Unit: 1.40
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,a*1.40,0.00,(a*1.4));
     else if(a<600)
    printf("Units Consumed: %d
Cost per Unit: 1.60
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,a*1.60,(15*a*1.6)/100.0,(a*1.6)+((15*a*1.60)/100.0));
     else if(a<800)
    printf("Units Consumed: %d
Cost per Unit: 1.80
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,a*1.80,(15*a*1.8)/100.0,(a*1.8)+((15*a*1.80)/100.0));
     else 
    printf("Units Consumed: %d
Cost per Unit: 2.00
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,a*2.00,(15*a*2.0)/100.0,(a*2.0)+((15*a*2.00)/100.0));
}