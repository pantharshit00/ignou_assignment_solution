#include <math.h>
#include <stdio.h>

int factorial(int number) {
  int fact = 1;
  for (int i = 1; i <= number; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  int number;

  printf("Please enter a number\n");
  scanf("%d", &number);
  int answer = 0;
  for (int i = 0; i < 10; i++) {
    int sign = pow(-1, i);
    int power = (i * 2) + 1;
    int term = sign * (pow(number, power) / factorial(power));
    answer += term;
  }

  printf("sine of the given number using 10 terms of Taylor series = %d)",
         answer);

  return 0;
}
