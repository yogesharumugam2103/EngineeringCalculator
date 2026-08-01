#include <stdio.h>
#include <math.h>
#include "basic.h"
#include "input.h"

void inputNumbers(double *num1, double *num2)
{
    *num1 = getValidNumber("Enter first number: ");
    *num2 = getValidNumber("Enter second number: ");
}

double addition(double num1, double num2)
{
    return num1+num2;
}

double subtraction(double num1, double num2)
{
    return num1-num2;
}

double multiplication(double num1, double num2)
{
    return num1*num2;
}

double division(double num1, double num2)
{
    if (num2==0){
        printf("Cannot be divided by Zero!\n");
        return 0;
    }
    return num1/num2;
}

double modulus(double num1, double num2)
{
    return fmod(num1, num2);
}

double power(double num1, double num2)
{
    return pow(num1,num2);
}


void basicCalculatorMenu()
{
    int choice;
    double num1, num2, result;

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
              result = addition(num1, num2);
              printf("Result = %.2lf\n", result);
              break;
        
            case 2:
              inputNumbers(&num1, &num2);
              result = subtraction(num1, num2);
              printf("Result = %.2lf\n", result);
              break;

            case 3:
              inputNumbers(&num1, &num2);
              result = multiplication(num1, num2);
              printf("Result = %.2lf\n", result);
              break;

            case 4:
              inputNumbers(&num1, &num2);
              inputNumbers(&num1, &num2);
              division(num1, num2);
              break;

            case 5:
              inputNumbers(&num1, &num2);
              result = modulus(num1, num2);
              printf("Result = %.2lf\n", result);
              break;

            case 6:
              inputNumbers(&num1, &num2);
              result = power(num1, num2);
              printf("Result = %.2lf\n", result);
              break;

            case 7:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              break;
        }
    } while(choice!=7);
}