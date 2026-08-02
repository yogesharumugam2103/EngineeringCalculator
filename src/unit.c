#include <stdio.h>
#include <math.h>
#include "unit.h"
#include "input.h"
#include "utility.h"
#include "history.h"

void lengthConverter()
{
    int choice;
    double value;
    double result;
    char entry[100];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        LENGTH CONVERTER\n");
        printf("=====================================\n\n");

        printf("1. Meter to Kilometer\n");
        printf("2. Kilometer to Meter\n");
        printf("3. Meter to Centimeter\n");
        printf("4. Centimeter to Meter\n");
        printf("5. Meter to Millimeter\n");
        printf("6. Millimeter to Meter\n");
        printf("7. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 7);
        switch (choice) {
            case 1:
              value = getValidNumber("Enter value: ");
              result = value / 1000.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf km",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 2:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf km = %.4lf m",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;
            
            case 3:
              value = getValidNumber("Enter value: ");
              result = value * 100.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf cm",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 4:
              value = getValidNumber("Enter value: ");
              result = value / 100.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf cm = %.4lf m",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 5:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf mm",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 6:
              value = getValidNumber("Enter value: ");
              result = value / 1000.0;
              printf("Result = %.4lf\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf mm = %.4lf m",
                       value, result);
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




void unitConverterMenu()
{
    int choice;

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        UNIT CONVERTER\n");
        printf("=====================================\n\n");

        printf("1. Length\n");
        printf("2. Mass\n");
        printf("3. Temperature\n");
        printf("4. Area\n");
        printf("5. Volume\n");
        printf("6. Speed\n");
        printf("7. Time\n");
        printf("8. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 8);
        switch (choice) {
            case 1:
              lengthConverter();
              break;

            case 2:
              printf("Mass Converter Coming Soon!\n");
              pauseScreen();
              break;
            
            case 3:
              printf("Temperature Converter Coming Soon!\n");
              pauseScreen();
              break;

            case 4:
              printf("Area Converter Coming Soon!\n");
              pauseScreen();
              break;

            case 5:
              printf("Volume Converter Coming Soon!\n");
              pauseScreen();
              break;

            case 6:
              printf("Speed Converter Coming Soon!\n");
              pauseScreen();
              break;

            case 7:
              printf("Time Converter Coming Soon!\n");
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