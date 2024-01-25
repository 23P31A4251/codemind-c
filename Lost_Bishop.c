#include<stdio.h>
int main()
{
    int i,j,a=0,b[8],k,c=0,d[100],e=0,f,g,h,l;
    char str[1000];
    scanf("%d",&f);
    for(k=0;k<f;k++)
    {
        e=0;
        c=0;
        for(i=0;i<8;i++)
        {
            a=0;
        scanf("%s",&str);
        for(j=0;str[j];j++)
        { 
        if(str[j]=='#')
          {
            a++;
            g=j+1;
          }
        }
        if(a==1)
        {
            d[e]=g;
            e++;
        }
        else if(a==2)
        {
            d[e]=0;
            e++;
        }
        b[c]=a;
        c++;
        }
        for(i=0;i<16;i++)
        {
            if(b[i]==2&&b[i+1]==1&&b[i+2]==2)
            {
                h=i+2;
                break;
            }
        }
        for(i=0;i<16;i++)
        {
            if(d[i]==0&&d[i+1]!=0&&d[i+2]==0)
            {
                l=d[i+1];
                break;
            }
        }
        printf("%d %d
",h,l);
    }
}
