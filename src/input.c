#include <stdio.h>
#include "input.h"

double getValidNumber(const char *message)
{
    double number;

    printf("%s", message);
    scanf("%lf", &number);

    return number;
}