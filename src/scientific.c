#include <stdio.h>
#include <math.h>
#include "scientific.h"
#include "input.h"
#include "utility.h"
#include "history.h"
#define PI 3.14159265358979323846

void inputNumber(double *number)
{
    *number = getValidNumber("Enter number: ");
}

double squareRoot(double num){
    return sqrt(num);
}
double sine(double degree){
    double radians = degree * PI / 180.0;
    return sin(radians);
}
double cosine(double degree){
    double radians = degree * PI / 180.0;
    return cos(radians);
}
double tangent(double degree){
    double radians = degree * PI / 180.0;
    return tan(radians);
}

double logarithm(double num){
    return log10(num);
}
double naturalLog(double num){
    return log(num);
}

double factorial(int n)
{
    double result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

void scientificCalculatorMenu()
{
    int choice;
    double number, result;
    char entry[100];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        SCIENTIFIC CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Square Root\n");
        printf("2. Sine\n");
        printf("3. Cosine\n");
        printf("4. Tangent\n");
        printf("5. Log10\n");
        printf("6. Natural Log\n");
        printf("7. Factorial\n");
        printf("8. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 8);
        switch (choice) {
            case 1:
              inputNumber(&number);
              if (number<0){
                printf("Square root is not defined for negative numbers.\n");
                pauseScreen();
                break;
              }
              result = squareRoot(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "sqrt(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 2:
              inputNumber(&number);
              result = sine(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "sin(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 3:
              inputNumber(&number);
              result = cosine(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "cos(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 4:
              inputNumber(&number);
              result = tangent(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "tan(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 5:
              inputNumber(&number);
              if (number <= 0){
                printf("Logarithm is defined only for positive numbers.\n");
                pauseScreen();
                break;
              }              
              result = logarithm(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "log10(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 6:
              inputNumber(&number);
              if (number <= 0){
                printf("Natural logarithm is defined only for positive numbers.\n");
                pauseScreen();
                break;
              }                 
              result = naturalLog(number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "log(%.2lf) = %.2lf",
                       number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 7:
              inputNumber(&number);
              if (number < 0 || number != (int)number){
                printf("Factorial is only defined for non-negative integers.\n");
                pauseScreen();
                break;
              }                
              result = factorial((int)number);
              printf("Result = %.2lf\n", result);

              snprintf(entry, sizeof(entry),
                       "%d! = %.0lf",
                       (int)number, result);

              addHistory(entry);

              pauseScreen();
              break;

            case 8:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=8);
}