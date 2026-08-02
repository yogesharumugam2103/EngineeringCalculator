#ifndef MATRIX_H
#define MATRIX_H

void matrixMenu();

void matrixAddition();
void matrixSubtraction();
void matrixMultiplication();
void matrixTranspose();

void inputMatrix(int rows, int cols, double matrix[10][10]);
void displayMatrix(int rows, int cols, double matrix[10][10]);
void inputMatrixSize(int *rows, int *cols);

#endif