#include <stdio.h>
#include "menu.h"
#include "basic.h"
#include "input.h"
#include "utility.h"
#include "history.h"
#include "scientific.h"
#include "matrix.h"
#include "unit.h"
#include "number_system.h"
#include "statistics.h"
#include "geometry.h"


int main()
{
    int choice;
    do{
        clearScreen();
        displayMainMenu();
        choice = getValidChoice("Enter your choice: ", 1, 9);

        switch (choice) {
            case 1:
              basicCalculatorMenu();
              break;
        
            case 2:
              scientificCalculatorMenu();
              break;

            case 3:
              matrixMenu();
              break;

            case 4:
              unitConverterMenu();
              break;

            case 5:
              statisticsCalculatorMenu();
              break;

            case 6:
              numberSystemMenu();
              break;

            case 7:
              geometryCalculatorMenu();
              break;              

            case 8:
              displayHistory();
              pauseScreen();
              break;

            case 9:
              printf("\nThank you for using Engineering Calculator!\n\n");
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
        }
    } while(choice!=9);

    return 0;
}