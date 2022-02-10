/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
  int mark1, mark2;
  float avg = 0;

  printf("Enter the mark of subject 01 : ");
  scanf("%d", &mark1);

  printf("Enter the mark of subject 02 : ");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2;

  printf("Average of the two subject = %.1f", avg);
  
  return 0;
}

