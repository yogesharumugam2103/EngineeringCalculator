#include <stdio.h>
#include "menu.h"
#include "basic.h"
#include "input.h"
#include "utility.h"
   
int main()
{
    int choice;
    do{
        clearScreen();
        displayMainMenu();
        choice = getValidChoice("Enter your choice: ", 1, 7);

        switch (choice) {
            case 1:
              basicCalculatorMenu();
              break;
        
            case 2:
              printf("\nScientific Calculator Selected\n\n");
              break;

            case 3:
              printf("\nMatrix Operations Selected\n\n");
              break;

            case 4:
              printf("\nUnit Converter Selected\n\n");
              break;

            case 5:
              printf("\nStatistics Selected\n\n");
              break;

            case 6:
              printf("\nNumber System Converter Selected\n\n");
              break;

            case 7:
              printf("\nThank you for using Engineering Calculator!\n\n");
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
        }
    } while(choice!=7);

    return 0;
}