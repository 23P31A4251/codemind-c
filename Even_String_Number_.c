#include<stdio.h>
int main()
{
    int b=0,c=0,i,j,d=0,e=10,g=0,f[1000]={0};
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        
    }
    int arr[i];
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            arr[c]=str[i]-'0';
            c++;
        }
    }
    for(i=0;i<c;i++)
    {
        if(e>arr[i]&&arr[i]%2==0)
        {
            e=arr[i];
        }
    }
    if(e==10)
    {
        printf("-1");
    }
    else
    {
   
    for(i=0;i<c;i++)
    {
        if(arr[i]!=e)
        {
       f[arr[i]]++;
        }
    }
    for(i=10;i>=0;i--)
    {
        if(f[i]>=1)
        {
            printf("%d",i);
        }
    }
  printf("%d",e);
    
   
    }
}