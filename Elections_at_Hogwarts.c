#include<stdio.h>
int main()
{
    int a,c,b;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50)
    printf("Gryffindor");
    else if(b>50)
    printf("Slytherin");
    else if(c>50)
    printf("Hufflepuff");
    else 
    printf("NOTA");
}