#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

void pauseScreen()
{
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

void clearScreen()
{
    system("cls");
}