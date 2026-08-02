#include <stdio.h>
#include <string.h>
#include "matrix.h"
#include "input.h"
#include "utility.h"
#include "history.h"

void appendMatrix(char entry[],
                  const char *title,
                  int rows,
                  int cols,
                  double matrix[10][10])
{
    strcat(entry, title);
    strcat(entry, "\n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            char temp[30];

            sprintf(temp,"%8.2lf ",matrix[i][j]);

            strcat(entry,temp);
        }

        strcat(entry,"\n");
    }

    strcat(entry,"\n");
}

void inputMatrix(int rows, int cols, double matrix[10][10])
{
    printf("\nEnter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            matrix[i][j] = getValidNumber("");
        }
    }
}

void displayMatrix(int rows, int cols, double matrix[10][10])
{
    printf("\nResult Matrix:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%8.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputMatrixSize(int *rows, int *cols){
    *rows = getValidChoice("Enter rows (1-10): ", 1, 10);
    *cols = getValidChoice("Enter columns (1-10): ", 1, 10);
}

void matrixAddition()
{
    int rows, cols;
    double A[10][10];
    double B[10][10];
    double C[10][10];
    char entry[2000];

    inputMatrixSize(&rows, &cols);

    printf("\nMatrix A\n");
    inputMatrix(rows, cols, A);

    printf("\nMatrix B\n");
    inputMatrix(rows, cols, B);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    displayMatrix(rows, cols, C);

  sprintf(entry,
          "Matrix Addition (%dx%d)\n\n",
          rows,
          cols);

  appendMatrix(entry,"Matrix A:",rows,cols,A);

  appendMatrix(entry,"Matrix B:",rows,cols,B);

  appendMatrix(entry,"Result:",rows,cols,C);

  addHistory(entry);

  pauseScreen();
}

void matrixSubtraction()
{
    int rows, cols;
    double A[10][10];
    double B[10][10];
    double C[10][10];
    char entry[2000];

    inputMatrixSize(&rows, &cols);

    printf("\nMatrix A\n");
    inputMatrix(rows, cols, A);

    printf("\nMatrix B\n");
    inputMatrix(rows, cols, B);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    displayMatrix(rows, cols, C);

  sprintf(entry,
          "Matrix Subtraction (%dx%d)\n\n",
          rows, cols);

  appendMatrix(entry, "Matrix A:", rows, cols, A);
  appendMatrix(entry, "Matrix B:", rows, cols, B);
  appendMatrix(entry, "Result:", rows, cols, C);

  addHistory(entry);

  pauseScreen();
}

void matrixMultiplication()
{
    int rowsA, colsA;
    int rowsB, colsB;
    double A[10][10];
    double B[10][10];
    double C[10][10];
    char entry[5000] = "";

    printf("Matrix A\n");
    inputMatrixSize(&rowsA, &colsA);

    printf("\nMatrix B\n");
    inputMatrixSize(&rowsB, &colsB);

    if (colsA != rowsB)
    {
      printf("\nMatrix multiplication is not possible.\n");
      printf("Columns of Matrix A must equal rows of Matrix B.\n");
      pauseScreen();
      return;
    }

    printf("\nEnter Matrix A\n");
    inputMatrix(rowsA, colsA, A);

    // Input Matrix B
    printf("\nEnter Matrix B\n");
    inputMatrix(rowsB, colsB, B);    

  for (int i = 0; i < rowsA; i++)
  {
    for (int j = 0; j < colsB; j++)
    {
        C[i][j] = 0;

        for (int k = 0; k < colsA; k++)
        {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
  }
  displayMatrix(rowsA, colsB, C);

  sprintf(entry,
          "Matrix Multiplication (%dx%d x %dx%d)\n\n",
          rowsA, colsA,
          rowsB, colsB);

  appendMatrix(entry, "Matrix A:", rowsA, colsA, A);
  appendMatrix(entry, "Matrix B:", rowsB, colsB, B);
  appendMatrix(entry, "Result:", rowsA, colsB, C);

  addHistory(entry);

  pauseScreen();
}

void matrixTranspose()
{
    int rows, cols;
    double A[10][10];
    double T[10][10];
    char entry[2000];

    inputMatrixSize(&rows, &cols);

    printf("\nMatrix A\n");
    inputMatrix(rows, cols, A);    

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
        T[j][i] = A[i][j];
    }
  }
  displayMatrix(cols, rows, T);

  sprintf(entry,
          "Matrix Transpose (%dx%d)\n\n",
          rows, cols);

  appendMatrix(entry, "Original Matrix:", rows, cols, A);
  appendMatrix(entry, "Transpose:", cols, rows, T);

  addHistory(entry);

  pauseScreen();
}

void matrixMenu()
{
    int choice;
    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        MATRIX OPERATIONS\n");
        printf("=====================================\n\n");

        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Matrix Transpose\n");
        printf("5. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 5);
        switch (choice) {
            case 1:
              matrixAddition();
              break;
        
            case 2:
              matrixSubtraction();
              break;

            case 3:
              matrixMultiplication();
              break;

            case 4:
              matrixTranspose();
              break;

            case 5:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=5);
}