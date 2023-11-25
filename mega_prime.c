#include<stdio.h>
int main()
{
    int a,b=0,c,d,e=0,f,i,j,k,l,x;
    scanf("%d",&a);
    x=a;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            b++;
        }
    }
    if(b==0)
    {
        d=0;
       while(x!=0)
       {
       	c=x%10;
       	x=x/10;
       	
       	if(c==1)
       	{
       	 e++;
       		break;
    	}
		   for(j=2;j<c;j++)
		   {
		   	if(c%j==0)
		   	{
		   		d++;
		   		
			   }
		   }
		  
		  
	   }
	   
	  
}
  if(b!=0||e==1||d!=0)
		   {
		   	printf("Not Mega Prime");
		   }
	    else if(d==0&&e!=1)
		   {
		   	printf("Mega Prime");
		   }
}