#include <stdio.h>
int main()

{

    int num, temp = 0;
    scanf("%d", &num);

        int i = 2; 
    while (i <= num-1)
    {

        if (num % i == 0)

        {

            temp++;

           

        }

        // incrementation

        i++;

    }

    // check for the value of temp and num.

    if (temp == 0 && num != 1)

    {

        printf("Prime");

    }

    else

    {

        printf("Not Prime", num);

    }

   

}