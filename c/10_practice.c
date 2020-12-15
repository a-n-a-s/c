#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter the first number %d \n ");
    scanf("%d", &num1);
    printf("Enter the second number %d \n ");
    scanf("%d", &num2);
    printf("Enter the third number %d \n ");
    scanf("%d", &num3);
    printf("Enter the fourth number %d \n ");
    scanf("%d", &num4);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            // printf("The Greatest number is %d\n",num1);
            if (num1 > num4)
            {
                printf("The Greatest number is %d\n", num1);
            }
            else
            {
                printf("The Greatest number is %d\n", num4);
            }
        }
        else
        {
            printf("The Greatest number is %d\n", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            // printf("The Greatest number is %d\n",num2);
            if (num2 > num4)
            {
                printf("The Greatest number is %d\n", num2);
            }
            else
            {
                printf("The Greatest number is %d\n",num4);
            }
            
        }
        else
        {
            if (num3>num4)
            {
                printf("The Greatest number is %d\n",num3);
            }
            else
            {
                printf("The Greatest number is %d\n",num4);
            }
            
            
        }
    }

    return 0;
}