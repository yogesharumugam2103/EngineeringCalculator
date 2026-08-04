#include <stdio.h>
#include <math.h>
#include "geometry.h"
#include "input.h"
#include "utility.h"
#include "history.h"
#define PI 3.14159265358979323846

void circleCalculator()
{
    int choice;
    double area, circumference, radius;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        CIRCLE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Circumference\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              radius = getPositiveNumber("Enter radius: ");
              area = PI * radius * radius;
              printf("\nArea = %.2lf\n",area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Circle (r = %.2lf) = %.2lf",
                       radius, area);

              addHistory(entry);
              pauseScreen();              
              break;
        
            case 2:     
              radius = getPositiveNumber("Enter radius: ");
              circumference = 2 * PI * radius;
              printf("\nCircumference = %.2lf\n",circumference);
              
              snprintf(entry, sizeof(entry),
                       "Circumference of Circle (r = %.2lf) = %.2lf",
                       radius, circumference); 
              addHistory(entry);
              pauseScreen();                                                      
              break;    

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);

}

void rectangleCalculator()
{
    int choice;
    double area, perimeter, length, width;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        RECTANGLE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              length = getPositiveNumber("Enter length: ");
              width = getPositiveNumber("Enter width: ");
              area = length * width;
              printf("\nArea = %.2lf\n",area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Rectangle (l = %.2lf, w = %.2lf) = %.2lf",
                       length, width, area);

              addHistory(entry);
              pauseScreen();              
              break;
        
            case 2:     
              length = getPositiveNumber("Enter length: ");
              width = getPositiveNumber("Enter width: ");
              perimeter = 2 * (length + width);
              printf("\nPerimeter = %.2lf\n",perimeter);
              
              snprintf(entry, sizeof(entry),
                       "Perimeter of Rectangle (l = %.2lf, w = %.2lf) = %.2lf",
                       length, width, perimeter); 
              addHistory(entry);
              pauseScreen();                                                      
              break;    

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);

}

void squareCalculator()
{
    int choice;
    double area, perimeter, side;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        SQUARE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {        
            case 1:
              side = getPositiveNumber("Enter side: ");
              area = side * side;
              printf("\nArea = %.2lf\n",area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Square (s = %.2lf) = %.2lf",
                       side, area);

              addHistory(entry);
              pauseScreen();              
              break;
        
            case 2:     
              side = getPositiveNumber("Enter side: ");
              perimeter = 4 * side;
              printf("\nPerimeter = %.2lf\n",perimeter);
              
              snprintf(entry, sizeof(entry),
                       "Perimeter of Square (s = %.2lf) = %.2lf",
                       side, perimeter); 
              addHistory(entry);
              pauseScreen();                                                      
              break;    

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);

}

void triangleCalculator()
{
    int choice;
    double area, perimeter;
    double base, height;
    double side1, side2, side3;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        TRIANGLE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              base = getPositiveNumber("Enter base: ");
              height = getPositiveNumber("Enter height: ");
              area = 0.5 * base * height;
              printf("\nArea = %.2lf\n", area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Triangle (b = %.2lf, h = %.2lf) = %.2lf",
                       base, height, area);

              addHistory(entry);
              pauseScreen();              
              break;
        
            case 2:     
              side1 = getPositiveNumber("Enter side 1: ");
              side2 = getPositiveNumber("Enter side 2: ");
              side3 = getPositiveNumber("Enter side 3: ");
            
              if (side1 + side2 <= side3 ||
                  side1 + side3 <= side2 ||
                  side2 + side3 <= side1)
              {
                printf("\nInvalid triangle!\n");
                pauseScreen();
                break;
              }
              
              perimeter = side1 + side2 + side3;

              printf("\nPerimeter = %.2lf\n", perimeter);
              
              snprintf(entry, sizeof(entry),
                       "Perimeter of Triangle (s1 = %.2lf, s2 = %.2lf, s3 = %.2lf) = %.2lf",
                       side1, side2, side3, perimeter); 
              addHistory(entry);
              pauseScreen();                                                      
              break;    

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void parallelogramCalculator()
{
    int choice;
    double perimeter, area;
    double side, base, height;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        PARALLELOGRAM CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              base = getPositiveNumber("Enter base : ");
              height = getPositiveNumber("Enter height: ");
              area = base * height;
              printf("\nArea = %.2lf\n", area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Parallelogram (b = %.2lf, h = %.2lf) = %.2lf",
                       base, height, area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              base = getPositiveNumber("Enter base : ");
              side = getPositiveNumber("Enter side: ");
              perimeter = 2 * (base + side);
              printf("\nPerimeter = %.2lf\n", perimeter);
              
              snprintf(entry, sizeof(entry),
                       "Perimeter of Parallelogram (b = %.2lf, s = %.2lf) = %.2lf",
                       base, side, perimeter);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void trapeziumCalculator()
{
    int choice;
    double perimeter, side1, side2, side3, side4;
    double area, base1, base2, height;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        TRAPEZIUM CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Area\n");
        printf("2. Perimeter\n");
        printf("3. Back\n\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              base1 = getPositiveNumber("Enter base 1: ");
              base2 = getPositiveNumber("Enter base 2: ");
              height = getPositiveNumber("Enter height: ");
              area = ((base1 + base2) * height)/2;
              printf("\nArea = %.2lf\n", area);
              
              snprintf(entry, sizeof(entry),
                       "Area of Trapezium (b1 = %.2lf, b2 = %.2lf, h = %.2lf) = %.2lf",
                       base1, base2, height, area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              side1 = getPositiveNumber("Enter side 1: ");
              side2 = getPositiveNumber("Enter side 2: ");
              side3 = getPositiveNumber("Enter side 3: ");
              side4 = getPositiveNumber("Enter side 4: ");
              perimeter = side1 + side2 + side3 + side4;
              printf("\nPerimeter = %.2lf\n", perimeter);
              
              snprintf(entry, sizeof(entry),
                       "Perimeter of Trapezium (s1 = %.2lf, s2 = %.2lf, s3 = %.2lf, s4 = %.2lf) = %.2lf",
                       side1, side2, side3, side4, perimeter);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void cubeCalculator()
{
    int choice;
    double side;
    double surface_area, volume;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        CUBE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Total Surface Area\n");
        printf("2. Volume\n");
        printf("3. Back\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              side = getPositiveNumber("Enter side: ");
              surface_area = 6 * side * side;
              printf("\nTotal Surface Area = %.2lf\n",surface_area);
              
              snprintf(entry, sizeof(entry),
                       "Total Surface Area of Cube (s = %.2lf) = %.2lf",
                       side, surface_area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              side = getPositiveNumber("Enter side: ");
              volume = side * side * side;
              printf("\nVolume = %.2lf\n",volume);
              
              snprintf(entry, sizeof(entry),
                       "Volume of Cube (s = %.2lf) = %.2lf",
                       side, volume);

              addHistory(entry);
              pauseScreen();              
              break;       

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void cuboidCalculator()
{
    int choice;
    double surface_area, volume, length, width, height;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        CUBOID CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Total Surface Area\n");
        printf("2. Volume\n");
        printf("3. Back\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              length = getPositiveNumber("Enter length: ");
              width = getPositiveNumber("Enter width: ");
              height = getPositiveNumber("Enter height: ");
              surface_area = 2 * ((length*width) + (length*height) + (width*height));
              printf("\nTotal Surface Area = %.2lf\n",surface_area);
              
              snprintf(entry, sizeof(entry),
                       "Total Surface Area of Cuboid (l = %.2lf, w = %.2lf, h = %.2lf) = %.2lf",
                       length, width, height, surface_area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              length = getPositiveNumber("Enter length: ");
              width = getPositiveNumber("Enter width: ");
              height = getPositiveNumber("Enter height: ");
              volume = length * width * height;
              printf("\nVolume = %.2lf\n",volume);
              
              snprintf(entry, sizeof(entry),
                       "Volume of Cuboid (l = %.2lf, w = %.2lf, h = %.2lf) = %.2lf",
                       length, width, height, volume);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void sphereCalculator() 
{
    int choice;
    double surface_area, radius, volume;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        SPHERE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Total Surface Area\n");
        printf("2. Volume\n");
        printf("3. Back\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              radius = getPositiveNumber("Enter radius: ");
              surface_area = 4 * PI * radius * radius;
              printf("\nTotal Surface Area = %.2lf\n",surface_area);
              
              snprintf(entry, sizeof(entry),
                       "Total Surface Area of Sphere (r = %.2lf) = %.2lf",
                       radius, surface_area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              radius = getPositiveNumber("Enter radius: ");
              volume = (4.0 / 3.0) * PI * radius * radius * radius;
              printf("\nVolume = %.2lf\n",volume);
              
              snprintf(entry, sizeof(entry),
                       "Volume of Sphere (r = %.2lf) = %.2lf",
                       radius, volume);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void cylinderCalculator()
{
    int choice;
    double surface_area, volume, radius, height;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        CYLINDER CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Total Surface Area\n");
        printf("2. Volume\n");
        printf("3. Back\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              radius = getPositiveNumber("Enter radius: ");
              height = getPositiveNumber("Enter height: ");
              surface_area = 2 * PI * radius * (radius + height);
              printf("\nTotal Surface Area = %.2lf\n",surface_area);
              
              snprintf(entry, sizeof(entry),
                       "Total Surface Area of Cylinder (r = %.2lf, h = %.2lf) = %.2lf",
                       radius, height, surface_area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              radius = getPositiveNumber("Enter radius: ");
              height = getPositiveNumber("Enter height: ");
              volume = PI * radius * radius * height;
              printf("\nVolume = %.2lf\n",volume);
              
              snprintf(entry, sizeof(entry),
                       "Volume of Cylinder (r = %.2lf, h = %.2lf) = %.2lf",
                       radius, height, volume);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}

void coneCalculator()
{
    int choice;
    double surface_area, volume, radius, height, slantheight;
    char entry[200];

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        CONE CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Total Surface Area\n");
        printf("2. Volume\n");
        printf("3. Back\n");    
        choice = getValidChoice("Enter your choice: ", 1, 3);
        switch (choice) {
            case 1:
              radius = getPositiveNumber("Enter radius: ");
              height = getPositiveNumber("Enter height: ");
              slantheight = sqrt(radius * radius + height * height);
              surface_area = PI * radius * (radius + slantheight);
              printf("\nTotal Surface Area = %.2lf\n",surface_area);
              
              snprintf(entry, sizeof(entry),
                       "Total Surface Area of Cone (r = %.2lf, h = %.2lf) = %.2lf",
                       radius, height, surface_area);

              addHistory(entry);
              pauseScreen();              
              break;      
        
            case 2:
              radius = getPositiveNumber("Enter radius: ");
              height = getPositiveNumber("Enter height: ");
              volume = (1.0 / 3.0) * PI * radius * radius * height;
              printf("\nVolume = %.2lf\n",volume);
              
              snprintf(entry, sizeof(entry),
                       "Volume of Cone (r = %.2lf, h = %.2lf) = %.2lf",
                       radius, height, volume);

              addHistory(entry);
              pauseScreen();              
              break;         

            case 3:
              break;

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=3);
}


void geometryCalculatorMenu()
{
    int choice;

    do{
        clearScreen();
        printf("\n=====================================\n");
        printf("        GEOMETRY CALCULATOR\n");
        printf("=====================================\n\n");

        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Square\n");
        printf("4. Triangle\n");
        printf("5. Parallelogram\n");
        printf("6. Trapezium\n");
        printf("7. Cube\n");
        printf("8. Cuboid\n");
        printf("9. Sphere\n");
        printf("10. Cylinder\n");
        printf("11. Cone\n");
        printf("12. Back\n");
        printf("\n");
        choice = getValidChoice("Enter your choice: ", 1, 12);
        switch (choice) {
            case 1:
              circleCalculator();
              break;
        
            case 2:
              rectangleCalculator();              
              break;

            case 3:
              squareCalculator();
              break;

            case 4:
              triangleCalculator();
              break;

            case 5:
              parallelogramCalculator();
              break;

            case 6:
              trapeziumCalculator();
              break;

            case 7:
              cubeCalculator();
              break;

            case 8:
              cuboidCalculator();
              break;
              
            case 9:
              sphereCalculator();
              break;    
              
            case 10:
              cylinderCalculator();
              break;  
              
            case 11:
              coneCalculator();
              break;

            case 12:
              break;              

            default:
              printf("\nInvalid choice! Please try again.\n\n");
              pauseScreen();
              break;
        }
    } while(choice!=12);
}