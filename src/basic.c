#include <stdio.h>
#include <math.h>
#include "basic.h"

void basicCalculatorMenu()
{
    int choice,num1,num2;
    
    do{
        printf("\n=====================================\n");
        printf("        BASIC CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",num1+num2);
              break;
        
            case 2:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",num1-num2);
              break;

            case 3:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",num1*num2);
              break;

            case 4:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",num1/num2);
              break;

            case 5:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",num1%num2);
              break;

            case 6:
              printf("Enter first number: ");
              scanf("%d",&num1);
              printf("Enter second number: ");
              scanf("%d",&num2);
              printf("Result = %d\n\n",pow(num1,num2));
              break;

            case 7:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              break;
        }
    } while(choice!=7);
}