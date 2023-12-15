#include<stdio.h>
int main()
{
    int b,c,d,e,f,i,j;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&d,&e);
    int A[d][e];
    for(i=0;i<d;i++)
    {
        for(j=0;j<e;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
          {
             f=a[i][j]+A[i][j];
             printf("%d ",f);
          } 
          printf("
");
}
}