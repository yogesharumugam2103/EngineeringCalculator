#include <stdio.h>
#include <math.h>
#include "basic.h"

void inputNumbers(double *num1, double *num2)
{
    printf("Enter first number: ");
    scanf("%lf", num1);

    printf("Enter second number: ");
    scanf("%lf", num2);
}

void addition(double num1, double num2)
{
    printf("Result = %.2lf\n\n", num1 + num2);
}

void subtraction(double num1, double num2)
{
    printf("Result = %.2lf\n\n", num1 - num2);
}

void multiplication(double num1, double num2)
{
    printf("Result = %.2lf\n", num1 * num2);
}

void division(double num1, double num2)
{
    if (num2==0){
        printf("Number cannot be divided by Zero!");
    }
    else{
        printf("Result = %.2lf\n\n", num1 / num2);
    }
}

void modulus(double num1, double num2)
{
    printf("Result = %.2lf\n\n", fmod(num1, num2));
}

void power(double num1, double num2)
{
    printf("Result = %.2lf\n\n", pow(num1,num2));
}


void basicCalculatorMenu()
{
    int choice;
    double num1, num2;

    do{
        printf("\n=====================================\n");
        printf("        BASIC CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
              inputNumbers(&num1, &num2);
              addition(num1, num2);
              break;
        
            case 2:
              inputNumbers(&num1, &num2);
              subtraction(num1, num2);
              break;

            case 3:
              inputNumbers(&num1, &num2);
              multiplication(num1, num2);
              break;

            case 4:
              inputNumbers(&num1, &num2);
              division(num1, num2);
              break;

            case 5:
              inputNumbers(&num1, &num2);
              modulus(num1, num2);
              break;

            case 6:
              inputNumbers(&num1, &num2);
              power(num1, num2);
              break;

            case 7:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              break;
        }
    } while(choice!=7);
}