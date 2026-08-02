#ifndef HISTORY_H
#define HISTORY_H

typedef struct
{
    char operation[50];

    int rowsA;
    int colsA;
    double A[10][10];

    int rowsB;
    int colsB;
    double B[10][10];

    int rowsR;
    int colsR;
    double Result[10][10];

} MatrixHistory;

void addHistory(const char *entry);
void displayHistory();
void clearHistory();

void addMatrixHistory(
    const char *operation,
    int rowsA, int colsA,
    double A[10][10],
    int rowsB, int colsB,
    double B[10][10],
    int rowsR, int colsR,
    double Result[10][10]);

void displayMatrixHistory();

#endif