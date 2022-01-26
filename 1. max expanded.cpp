#include <stdio.h>
int main()
{
    int num1, num2, num3, max,min;
    printf("Enter the values of num1,num2,num3");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            // If num1>num2 , num1>num3 
            max = num1;
        }
        else
        {
           //If num1>num2 , num3>num1 
            max = num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            //If num2>num1 , num2>num3 
            max = num2;
        }
        else
        {
            // If num2>num1 , num3>num2 
            max = num3;
        }
    
        }
        printf("Maximum = %d", max); 
        if(num1 < num2)
        {
        if(num1 < num3)
        {
            // If num1 < num2 and num1 < num3 
            min = num1;
        }
        else
        {
           //If num1 , num2 but num1 < num3 is not true 
            min = num3;
        }
        }
    else // num2<num1
        {
        if(num2 < num3)
        {
            //If num2<num1  and num2 , num3 
            min = num2;
        }
        else
        {
            // If num2<num3 and num3 <num2 
            min = num3;
        }
    }
    printf("\nMinimum = %d", min);
    }
    
