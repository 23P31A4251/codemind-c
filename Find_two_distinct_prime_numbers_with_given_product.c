#include<stdio.h>
int main()
{
    int a,b,c,d,j,i,k,l,e,f=0;
    scanf("%d",&a);
    b=a;
    for(i=2;i<a;i++)
    {
        
        if(a%i==0)
        {
        	c=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c++;
                    break;
                }
            }
            for(k=i+1;k<a;k++)
            {
            	if(a%k==0)
            	{
            		d=0;
            		for(l=2;l<=k/2;l++)
            		{
            			if(k%l==0)
            			{
            				d++;
            				break;
						}
					}
					if(c==0&&d==0)
          		    {
           		 	e=i*k;
           		 	if(e==a)
          		 	{
     		 		f++;
    		 		printf("%d %d",i,k);
           	 		break;
					}
					}
				}
	
			}
			
            if(c==0&&d==0)
            {
    	 	e=i*k;
    	 	if(e==a)
     	 	{
	 		break;
			}
        	}
    }
}
if(f==0)
{
	printf("-1");
}
}