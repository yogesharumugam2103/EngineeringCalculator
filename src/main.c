#include <stdio.h>

int main()
{
    int choice;
    do{
        printf("=====================================\n");
        printf("      ENGINEERING CALCULATOR\n");
        printf("=====================================\n");
        printf("\n");
    
        printf("1. Basic Calculator\n");
        printf("2. Scientific Calculator\n");
        printf("3. Matrix Operations\n");
        printf("4. Unit Converter\n");
        printf("5. Statistics\n");
        printf("6. Number System Converter\n");
        printf("7. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
              printf("\nBasic Calculator Selected\n\n");
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
              break;
        }
    } while(choice!=7);

    return 0;
}