#include <stdio.h>
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
              printf("Result = %.4lf km\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf km",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 2:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf m\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf km = %.4lf m",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;
            
            case 3:
              value = getValidNumber("Enter value: ");
              result = value * 100.0;
              printf("Result = %.4lf cm\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf cm",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 4:
              value = getValidNumber("Enter value: ");
              result = value / 100.0;
              printf("Result = %.4lf m\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf cm = %.4lf m",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 5:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf mm\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf m = %.4lf mm",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 6:
              value = getValidNumber("Enter value: ");
              result = value / 1000.0;
              printf("Result = %.4lf m\n", result);
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

void massConverter()
{
    int choice;
    double value;
    double result;
    char entry[100];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        MASS CONVERTER\n");
        printf("=====================================\n\n");

        printf("1. Kilogram to Gram\n");
        printf("2. Gram to Kilogram\n");
        printf("3. Kilogram to Milligram\n");
        printf("4. Milligram to Kilogram\n");
        printf("5. Gram to Milligram\n");
        printf("6. Milligram to Gram\n");
        printf("7. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 7);
        switch (choice) {
            case 1:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf g\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf kg = %.4lf g",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 2:
              value = getValidNumber("Enter value: ");
              result = value / 1000.0;
              printf("Result = %.4lf kg\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf g = %.4lf kg",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;
            
            case 3:
              value = getValidNumber("Enter value: ");
              result = value * 1000000.0;
              printf("Result = %.4lf mg\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf kg = %.4lf mg",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 4:
              value = getValidNumber("Enter value: ");
              result = value / 1000000.0;
              printf("Result = %.4lf kg\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf mg = %.4lf kg",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 5:
              value = getValidNumber("Enter value: ");
              result = value * 1000.0;
              printf("Result = %.4lf mg\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf g = %.4lf mg",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 6:
              value = getValidNumber("Enter value: ");
              result = value / 1000.0;
              printf("Result = %.4lf g\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf mg = %.4lf g",
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

void temperatureConverter()
{
    int choice;
    double value;
    double result;
    char entry[100];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        TEMPERATURE CONVERTER\n");
        printf("=====================================\n\n");

        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Celsius to Kelvin\n");
        printf("4. Kelvin to Celsius\n");
        printf("5. Fahrenheit to Kelvin\n");
        printf("6. Kelvin to Fahrenheit\n");
        printf("7. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 7);
        switch (choice) {
            case 1:
              value = getValidNumber("Enter value: ");
              result = (value * 9.0 / 5.0) + 32;
              printf("Result = %.2lf deg F\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf deg C = %.2lf deg F",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 2:
              value = getValidNumber("Enter value: ");
              result = (value - 32) * 5.0 / 9.0;
              printf("Result = %.2lf deg C\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf deg F = %.2lf deg C",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;
            
            case 3:
              value = getValidNumber("Enter value: ");
              if (value < -273.15)
              {
                printf("Temperature cannot be below absolute zero (-273.15 °C).\n");
                pauseScreen();
                break;
              }
              result = value + 273.15;
              printf("Result = %.2lf K\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf deg C = %.2lf K",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 4:
              value = getValidNumber("Enter value: ");
              if (value < 0)
              {
                printf("Kelvin cannot be negative.\n");
                pauseScreen();
                break;
              }              
              result = value - 273.15;
              printf("Result = %.2lf deg C\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf K = %.2lf deg C",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 5:
              value = getValidNumber("Enter value: ");
              if (value < -459.67)
              {
                printf("Temperature cannot be below absolute zero (-459.67 °F).\n");
                pauseScreen();
                break;
              }              
              result = (value - 32) * 5.0 / 9.0 + 273.15;
              printf("Result = %.2lf K\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf deg F = %.2lf K",
                       value, result);
              addHistory(entry);
              pauseScreen();
              break;

            case 6:
              value = getValidNumber("Enter value: ");
              if (value < 0)
              {
                printf("Kelvin cannot be negative.\n");
                pauseScreen();
                break;
              }                        
              result = (value - 273.15) * 9.0 / 5.0 + 32;
              printf("Result = %.2lf deg F\n", result);
              snprintf(entry, sizeof(entry),
                       "%.2lf K = %.2lf deg F",
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
              massConverter();
              break;
            
            case 3:
              temperatureConverter();
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