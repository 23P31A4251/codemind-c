#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f,i,j;
    char str[1000];
    scanf("%s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        b++;
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9')
        {
            continue;
        }
        a++;
    }
    char ar[b],arr[b];
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
        if(str[i]%2==0)
        {
            ar[c]=str[i];
            c++;
        }
        if(str[i]%2!=0)
        {
            arr[d]=str[i];
            d++;
        }
        e++;
        }
    }
   for(i=0;i<=e;i++)
   {
       if(ar[i]>='0'&&ar[i]<='9'||arr[i]>='0'&&arr[i]<='9')
       {
       if(a%2==0)
       {
           if(ar[i]!=NULL&&arr[i]!=NULL)
           {
           printf("%c%c",ar[i],arr[i]);
           }
           if(ar[i]==NULL)
           {
               printf("%c",arr[i]);
           }
           if(arr[i]==NULL)
           {
               printf("%c",ar[i]);
           }
       }
       else
       {
           if(arr[i]!=NULL&&ar[i]!=NULL)
           {
           printf("%c%c",arr[i],ar[i]);
           }
           if(arr[i]==NULL)
           {
               printf("%c",ar[i]);
           }
           if(ar[i]==NULL)
           {
               printf("%c",arr[i]);
           }
          
       }
       }
      
   }
   
}