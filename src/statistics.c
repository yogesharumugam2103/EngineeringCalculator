#include <stdio.h>
#include <math.h>
#include <string.h>
#include "statistics.h"
#include "input.h"
#include "utility.h"
#include "history.h"

void calculateMean()
{
  int n;
  double numbers[100];
  double sum = 0.0;
  double mean;
  char entry[1500];

  n = getValidChoice("Enter number of values (1-100): ", 1, 100);

  printf("\nEnter %d values:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    numbers[i] = getValidNumber("");
    sum += numbers[i];
  }

  mean = sum / n;
    
  char values[1500] = "";

  for (int i = 0; i < n; i++)
  {
    char temp[20];

    sprintf(temp, "%.2lf", numbers[i]);
    strcat(values, temp);

    if (i != n - 1)
      strcat(values, ", ");
  }

  printf("\nMean = %.2lf\n", mean);

  snprintf(entry, sizeof(entry),
           "Mean(%s) = %.2lf",
           values, mean);

  addHistory(entry);
  pauseScreen();
}

void calculateMedian(){
  int n;
  double numbers[100];
  double median;
  double temp;
  char entry[1500];

  n = getValidChoice("Enter number of values (1-100): ", 1, 100);
  printf("\nEnter %d values:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    numbers[i] = getValidNumber("");  
  } 

  char values[1500] = "";

  for (int i = 0; i < n; i++)
  {
    char temp[20];

    sprintf(temp, "%.2lf", numbers[i]);
    strcat(values, temp);

    if (i != n - 1)
      strcat(values, ", ");
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  if (n % 2 != 0){
    median = numbers[n/2];
  }
  else{
    median = (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
  }

  printf("\nMedian = %.2lf\n", median);

  snprintf(entry, sizeof(entry),
           "Median(%s) = %.2lf",
           values, median);

  addHistory(entry);

  pauseScreen();
}

void calculateStandardDeviation(){
  int n;
  double numbers[100];
  double sum = 0.0;
  double mean;
  char entry[1500];
  double variance = 0;
  double standardDeviation;

  n = getValidChoice("Enter number of values (1-100): ", 1, 100);

  printf("\nEnter %d values:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    numbers[i] = getValidNumber("");
    sum += numbers[i];
  }

  mean = sum / n; 
  
  for (int i = 0; i < n; i++)
  {
    variance += (numbers[i] - mean) * (numbers[i] - mean);
  }

  variance /= n;

  standardDeviation = sqrt(variance);
  printf("\nStandard Deviation = %.2lf\n", standardDeviation);

  strcpy(entry, "Standard Deviation(");

  for (int i = 0; i < n; i++)
  {
    char temp[30];
    sprintf(temp, "%.2lf", numbers[i]);
    strcat(entry, temp);

    if (i != n - 1)
      strcat(entry, ", ");
  }

  char temp[50];
  sprintf(temp, ") = %.2lf", standardDeviation);
  strcat(entry, temp);

  addHistory(entry);
  pauseScreen();  

}

void calculateVariance(){
  int n;
  double numbers[100];
  double sum = 0.0;
  double mean;
  char entry[1500];
  double variance = 0;

  n = getValidChoice("Enter number of values (1-100): ", 1, 100);

  printf("\nEnter %d values:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    numbers[i] = getValidNumber("");
    sum += numbers[i];
  }

  mean = sum / n; 
  
  for (int i = 0; i < n; i++)
  {
    variance += (numbers[i] - mean) * (numbers[i] - mean);
  }

  variance /= n;

  printf("\nVariance = %.2lf\n", variance);

  strcpy(entry, "Variance(");

  for (int i = 0; i < n; i++)
  {
    char temp[30];
    sprintf(temp, "%.2lf", numbers[i]);
    strcat(entry, temp);

    if (i != n - 1)
      strcat(entry, ", ");
  }

  char temp[50];
  sprintf(temp, ") = %.2lf", variance);
  strcat(entry, temp);

  addHistory(entry);
  pauseScreen();  
}

void calculateMode(){
  int n;
  double numbers[100];
  int maxCount = 0;
  double modes[100];
  int modeCount = 0;
  char entry[1500];

  n = getValidChoice("Enter number of values (1-100): ", 1, 100);
  printf("\nEnter %d values:\n", n);

  for (int i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    numbers[i] = getValidNumber("");
  }  

  for (int i = 0; i < n; i++)
  {
    int count = 1;

    for (int j = i + 1; j < n; j++)
    {
      if (numbers[i] == numbers[j])
      {
        count++;
      }
    }

    if (count > maxCount)
    {
      maxCount = count;
    }
  }

 modeCount = 0;

 for (int i = 0; i < n; i++)
 {
    int count = 1;

    for (int j = i + 1; j < n; j++)
    {
      if (numbers[i] == numbers[j])
        count++;
    }

    if (count == maxCount)
    {
      int alreadyAdded = 0;

      for (int k = 0; k < modeCount; k++)
      {
        if (modes[k] == numbers[i])
        {
          alreadyAdded = 1;
          break;
        }
      }

      if (!alreadyAdded)
      {
        modes[modeCount++] = numbers[i];
      }
    }
  }

  char values[1500] = "";

  for (int i = 0; i < n; i++)
  {
    char temp[20];

    sprintf(temp, "%.2lf", numbers[i]);
    strcat(values, temp);

    if (i != n - 1)
      strcat(values, ", ");
  }

  if (maxCount == 1)
  {
    printf("\nNo mode found.\n");
    snprintf(entry, sizeof(entry),
             "Mode(%s) = No mode",
             values);
  }
  else
  {
    char modeString[1500] = "";

    printf("\nMode = ");

    for (int i = 0; i < modeCount; i++)
    {
      printf("%.2lf", modes[i]);

      char temp[20];
      sprintf(temp, "%.2lf", modes[i]);
      strcat(modeString, temp);

      if (i != modeCount - 1)
      {
        printf(", ");
        strcat(modeString, ", ");
      }
    }

    printf("\n");

    snprintf(entry, sizeof(entry),
             "Mode(%s) = %s",
             values, modeString);
  }

  addHistory(entry);
  pauseScreen();
}


void statisticsCalculatorMenu()
{
  int choice;

  do{
      clearScreen();
      printf("\n=====================================\n");
      printf("        STATISTICS CALCULATOR\n");
      printf("=====================================\n\n");

      printf("1. Mean\n");
      printf("2. Median\n");
      printf("3. Mode\n");
      printf("4. Variance\n");
      printf("5. Standard Deviation\n");
      printf("6. Back\n");
      printf("\n");
      choice = getValidChoice("Enter your choice: ", 1, 6);
      switch (choice) {
        case 1:
          calculateMean();
          break;

        case 2:
          calculateMedian();
          break;

        case 3:
          calculateMode();
          break;

        case 4:
          calculateVariance();
          break;

        case 5:
          calculateStandardDeviation();
          break;

        case 6:
          break;

        default:
          printf("\nInvalid choice! Please try again.\n\n");
          pauseScreen();
          break;
      }
    } while(choice!=6);
}