#include<stdio.h>
int main()
{
    int i,j,b=0,d=0,e=0,f=0;
    char str[1000],a,c,str1[1000];
    scanf("%[^
]",&str);
     for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
        b++;
        }
    }
      
    for(i=0;;i++)
    {
     if(str[i]!=' '&&str[i]!=NULL)
     {
         str1[d]=str[i];
         e++;d++;
     }
     else if(str[i]==' '||str[i]==NULL)
     {
          if(str1[0]=='a'||str1[0]=='e'||str1[0]=='i'||str1[0]=='o'||str1[0]=='u'||str1[0]=='A'||str1[0]=='E'||str1[0]=='I'||str1[0]=='O'||str1[0]=='U')
          {
              for(j=0;j<e;j++)
              {
                  printf("%c",str1[j]);
              }
               printf("maa");
            for(j=1;j<=f;j++)
            {
                printf("a");
            }
            if(str[i]!=NULL)
               {
                   printf(" ");
               }
               d=0;e=0;
           }
           else
           {
                for(j=1;j<e;j++)
              {
                  printf("%c",str1[j]);
              }
              printf("%c",str1[0]);
              printf("maa");
            for(j=1;j<=f;j++)
            {
                printf("a");
            }
            if(str[i]!=NULL)
               {
                   printf(" ");
               }
               d=0;e=0;
           }
               f++;
     }
     if(str[i]==NULL)
     {
         break;
     }
    }
}