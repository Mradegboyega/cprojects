#include <stdio.h>

int main(void)
{
    float temprature;
    char unit;

    printf("Enter a temperature value: "); //prompted the user to enter a temprature value
    scanf("%f", &temprature);
    
    getchar(); // Clear the newline character from the buffer
    
    printf("Enter the unit of the temprature(F or C): ");
    scanf("%c", &unit); 
    

    if (unit == 'F' || unit == 'f')
    {
        float converted_temprature = (temprature - 32) * 5 / 9;
        printf("The converted unit is %.2f\n", converted_temprature);
    } 
    else if (unit == 'C' || unit == 'c')
    {
        float converted_temprature = (temprature * 9 / 5) + 32;
        printf("The converted unit is %.2f\n", converted_temprature);
    }
    else
    {
        printf("Invalid unit entered\n");
    }

    return 0;


}