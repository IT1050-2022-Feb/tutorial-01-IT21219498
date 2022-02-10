/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int, int);
int maximum(int, int);
int multiply(int, int);
int main(void) 
{
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int num1, int num2)
{
  if(num1 < num2)

  return num1;

  else

  return num2;

}

int maximum(int n1, int n2)
{
  if(n1 > n2)

  return n1;

  else

  return n2;
}

int multiply(int n01, int n02)
{
  return n01 * n02;
}
