#include <stdio.h>
#include <string.h>
#include "history.h"

#define MAX_HISTORY 100
#define MAX_ENTRY_LENGTH 5000
#define MAX_MATRIX_HISTORY 50

char history[MAX_HISTORY][MAX_ENTRY_LENGTH];
int historyCount = 0;

void displayHistory()
{
    printf("\n========== CALCULATION HISTORY ==========\n");

    if (historyCount == 0)
    {
        printf("No calculations yet.\n");
    }
    else
    {
        for (int i = 0; i < historyCount; i++)
        {
            printf("%d. %s\n", i + 1, history[i]);
        }
    }

    printf("=========================================\n");
}

void addHistory(const char *entry)
{
    if (historyCount < MAX_HISTORY)
    {
        strcpy(history[historyCount], entry);
        historyCount++;
    }
}

MatrixHistory matrixHistory[MAX_MATRIX_HISTORY];
int matrixHistoryCount = 0;