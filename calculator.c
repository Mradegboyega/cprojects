#include <stdio.h>

int main(void)
{   
    int num1;
    int num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    getchar();

    printf("Enter an operator(+, -, *,or /): ");
    scanf("%c", &operator);

    getchar();

    if (operator == '+')
    {
        int calculate = num1 + num2;
        printf("Your answer is %d\n", calculate);
    }
    else if (operator == '-')
    {
        int calculate = num1 - num2;
        printf("Your answer is %d\n", calculate);
    }
    else if (operator == '*')
    {
        int calculate = num1 * num2;
        printf("Your answer is %d\n", calculate);
    }
    else if (operator == '/')
    {
        float calculate = num1 / num2;
        printf("Your answer is %.2lf\n", calculate);
    }
    else
    {
        printf("You've entered an invalid operator\n");
    }
    
    

    return 0;
}