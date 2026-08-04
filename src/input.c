#include <stdio.h>
#include "input.h"

double getValidNumber(const char *message)
{
    double number;
    int ch;
    
    while (1){
        printf("%s", message);
        if (scanf("%lf", &number)==1){
            return number;
        }

        printf("Invalid input! Please enter a valid number.\n");

        while ((ch = getchar()) != '\n' && ch != EOF){
            // Discard invalid characters
        }
    }
}

int getValidChoice(const char *message, int min, int max)
{
    int choice;
    int ch;

    while (1)
    {
        printf("%s", message);

        if (scanf("%d", &choice) == 1)
        {
            if (choice >= min && choice <= max)
            {
                return choice;
            }

            printf("Please enter a number between %d and %d.\n", min, max);
        }
        else
        {
            printf("Invalid input! Please enter a valid integer.\n");
        }

        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            // Clear input buffer
        }
    }
}

double getPositiveNumber(const char *prompt)
{
    double num;

    do
    {
        num = getValidNumber(prompt);

        if (num <= 0)
        {
            printf("Value must be greater than zero.\n");
        }

    } while (num <= 0);

    return num;
}