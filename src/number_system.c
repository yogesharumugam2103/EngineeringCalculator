#include <stdio.h>
#include <string.h>
#include <math.h>
#include "number_system.h"
#include "input.h"
#include "utility.h"
#include "history.h"

void decimalToBinary(){
    int decimal;
    int originalDecimal;
    int binary[32];
    char binaryString[33] = "";
    int i = 0;
    char entry[100];

    decimal = getValidChoice("Enter decimal value: ", 0, 2147483647);
    originalDecimal = decimal;

    if (decimal == 0)
    {
        printf("Binary = 0\n");

        snprintf(entry, sizeof(entry),
                 "0 (Decimal) = 0 (Binary)");
        addHistory(entry);

        pauseScreen();
        return;
    }

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary = ");

    int k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
        binaryString[k++] = binary[j] + '0';
    }

    binaryString[k] = '\0';
    printf("\n");

    snprintf(entry, sizeof(entry),
             "%d (Decimal) = %s (Binary)",
             originalDecimal,
             binaryString);

    addHistory(entry);

    pauseScreen();
}

void binaryToDecimal()
{
    char binary[33];
    int decimal = 0;
    char entry[100];

    printf("Enter binary number: ");
    scanf("%32s", binary);

    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            printf("Invalid binary number!\n");
            pauseScreen();
            return;
        }

        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("Decimal = %d\n", decimal);

    snprintf(entry, sizeof(entry),
             "%s (Binary) = %d (Decimal)",
             binary, decimal);

    addHistory(entry);
    pauseScreen();
}

void decimalToOctal()
{
    int decimal;
    int originalDecimal;
    int octal[32];
    int i = 0;
    char octalString[33] = "";
    char entry[100];

    decimal = getValidChoice("Enter decimal value: ", 0, 2147483647);
    originalDecimal = decimal;

    if (decimal == 0)
    {
        printf("Octal = 0\n");

        snprintf(entry, sizeof(entry),
                 "0 (Decimal) = 0 (Octal)");
        addHistory(entry);

        pauseScreen();
        return;
    }

    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    printf("Octal = ");

    int k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
        octalString[k++] = octal[j] + '0';
    }

    octalString[k] = '\0';
    printf("\n");

    snprintf(entry, sizeof(entry),
             "%d (Decimal) = %s (Octal)",
             originalDecimal,
             octalString);

    addHistory(entry);
    pauseScreen();
}

void octalToDecimal()
{
    char octal[33];
    int decimal = 0;
    char entry[100];

    printf("Enter octal number: ");
    scanf("%32s", octal);

    for (int i = 0; octal[i] != '\0'; i++)
    {
        if (octal[i] < '0' || octal[i] > '7')
        {
            printf("Invalid octal number!\n");
            pauseScreen();
            return;
        }

        decimal = decimal * 8 + (octal[i] - '0');
    }

    printf("Decimal = %d\n", decimal);

    snprintf(entry, sizeof(entry),
             "%s (Octal) = %d (Decimal)",
             octal, decimal);

    addHistory(entry);
    pauseScreen();
}

void decimalToHexadecimal()
{
    int decimal;
    int originalDecimal;
    char hexadecimal[32];
    int i = 0;
    char hexadecimalString[33] = "";
    char entry[100];

    decimal = getValidChoice("Enter decimal value: ", 0, 2147483647);
    originalDecimal = decimal;

    if (decimal == 0)
    {
        printf("Hexadecimal = 0\n");

        snprintf(entry, sizeof(entry),
                 "0 (Decimal) = 0 (Hexadecimal)");
        addHistory(entry);

        pauseScreen();
        return;
    }

    while (decimal > 0)
    {
        int rem = decimal % 16;

        if (rem < 10)
        {
         hexadecimal[i] = rem + '0';
        }
        else
        {
         hexadecimal[i] = rem - 10 + 'A';
        }
        decimal /= 16;
        i++;
    }

    printf("Hexadecimal = ");

    int k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
        hexadecimalString[k++] = hexadecimal[j];
    }

    hexadecimalString[k] = '\0';
    printf("\n");

    snprintf(entry, sizeof(entry),
             "%d (Decimal) = %s (Hexadecimal)",
             originalDecimal,
             hexadecimalString);

    addHistory(entry);
    pauseScreen();
}

void hexadecimalToDecimal()
{
    char hexadecimal[33];
    int decimal = 0;
    int digit;
    char entry[100];

    printf("Enter hexadecimal number: ");
    scanf("%32s", hexadecimal);

    for (int i = 0; hexadecimal[i] != '\0'; i++)
    {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
        {
            digit = hexadecimal[i] - '0';
        }
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
        {
            digit = hexadecimal[i] - 'A' + 10;
        }
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
        {
            digit = hexadecimal[i] - 'a' + 10;
        }
        else
        {
            printf("Invalid hexadecimal number!\n");
            pauseScreen();
            return;
        }

        decimal = decimal * 16 + digit;
    }

    printf("Decimal = %d\n", decimal);

    snprintf(entry, sizeof(entry),
             "%s (Hexadecimal) = %d (Decimal)",
             hexadecimal, decimal);

    addHistory(entry);
    pauseScreen();
}

void numberSystemMenu()
{
    int choice;

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        NUMBER SYSTEM CONVERTER\n");
        printf("=====================================\n\n");

        printf("1. Decimal to Binary\n");
        printf("2. Binary to Decimal\n");
        printf("3. Decimal to Octal\n");
        printf("4. Octal to Decimal\n");
        printf("5. Decimal to Hexadecimal\n");
        printf("6. Hexadecimal to Decimal\n");
        printf("7. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 7);
        switch (choice) {
            case 1:
              decimalToBinary();
              break;
        
            case 2:
              binaryToDecimal();
              break;

            case 3:
              decimalToOctal();
              break;

            case 4:
              octalToDecimal();
              break;

            case 5:
              decimalToHexadecimal();
              break;

            case 6:
              hexadecimalToDecimal();
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