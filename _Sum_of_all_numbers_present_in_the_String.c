#include<stdio.h>  
int main()
{
    char str[100];
    int i,sum = 0;
    scanf("%[^
]",&str);
    for (i= 0; str[i] != NULL; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  
        {
            
            sum += (str[i] - '0'); 

        }
}
    printf("%d", sum);
}