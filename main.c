#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int factorial=1;
    printf("Enter the number:");
    scanf("%i",&num);
    if(num>=0)
        {
        for(int i=1 ; i <= num; i++)
    {
        factorial*=i;
    }
    printf("factorial of %i = %i\n",num,factorial);
    }
    else
    {
        printf("undefined");
    }
    return 0;
}
