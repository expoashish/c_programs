//C Program to Swap Two Numbers

#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);

      temp = first;  // Value of first is assigned to temp

      first = second; // Value of second is assigned to first

      second = temp; // Value of temp (initial value of first) is assigned to second

      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      return 0;
}