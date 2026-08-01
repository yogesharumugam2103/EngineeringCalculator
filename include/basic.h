#ifndef BASIC_H
#define BASIC_H

void inputNumbers(double *num1, double *num2);

double addition(double num1, double num2);
double subtraction(double num1, double num2);
double multiplication(double num1, double num2);

int division(double num1, double num2, double *result);
int modulus(double num1, double num2, double *result);

double power(double num1, double num2);

void basicCalculatorMenu();

#endif