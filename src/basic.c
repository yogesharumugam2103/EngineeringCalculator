#include <stdio.h>
#include <math.h>
#include "basic.h"
#include "input.h"
#include "utility.h"
#include "history.h"

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

int division(double num1, double num2, double *result)
{
    if (num2==0){
      return 0;
    }
    
    *result = num1 / num2;
    return 1;
    
}

int modulus(double num1, double num2, double *result)
{
    if (num2==0){
      return 0;
    }
    
    *result = fmod(num1, num2);
    return 1;
    
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
        clearScreen();
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
        choice = getValidChoice("Enter your choice: ", 1, 7);
        switch (choice) {
            case 1:
              inputNumbers(&num1, &num2);
              result = addition(num1, num2);
              printf("Result = %.2lf\n", result);
              char entry[100];
              snprintf(entry, sizeof(entry),
                       "%.2lf + %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);

              pauseScreen();
              break;
        
            case 2:
              inputNumbers(&num1, &num2);
              result = subtraction(num1, num2);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "%.2lf - %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);

              pauseScreen();              

              break;

            case 3:
              inputNumbers(&num1, &num2);
              result = multiplication(num1, num2);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "%.2lf * %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);
              pauseScreen();
              break;

            case 4:
              inputNumbers(&num1, &num2);
              if (division(num1, num2, &result))
              {
                printf("Result = %.2lf\n", result);
              }
              else{
                printf("Cannot divide by zero!\n");
              }

              snprintf(entry, sizeof(entry),
                       "%.2lf / %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);
              pauseScreen();
              break;

            case 5:
              inputNumbers(&num1, &num2);
              if (modulus(num1, num2, &result))
              {
                printf("Result = %.2lf\n", result);
              }
              else{
                printf("Cannot perform modulus with zero!\n");
              }

              snprintf(entry, sizeof(entry),
                       "%.2lf %% %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);
              pauseScreen();
              break;

            case 6:
              inputNumbers(&num1, &num2);
              result = power(num1, num2);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "%.2lf ^ %.2lf = %.2lf",
                       num1, num2, result);

              addHistory(entry);
              pauseScreen();
              break;

            case 7:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=7);
}