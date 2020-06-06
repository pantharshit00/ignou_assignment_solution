#include <stdio.h>
#include <stdlib.h>

void five_digit_number_reverse() {
  int number;
  printf("Enter a five digit number \n");
  scanf("%d", &number);

  if (number < 10000 || number > 99999) {
    printf("Didn't receive a five digit number, exiting...");
    exit(1);
  }

  int rev = 0, remainder;
  while (number > 0) {
    remainder = number % 10;
    rev = rev * 10 + remainder;
    number /= 10;
  }
  printf("Reversed number is %d", rev);
}

void float_comparision() {
  float num1, num2;

  printf("Enter the first number\n");
  scanf("%f", &num1);

  printf("Enter the second number\n");
  scanf("%f", &num2);

  float larger = num1 > num2 ? num1 : num2;

  printf("The larger number is %f", larger);
}

void number_operation_single_number() {
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);

  if (num % 2 == 0) {
    num /= 2;
  } else {
    num *= 3;
  }

  printf("Resulting number = %d", num);
}

void number_operation_three_equal() {
  int a, b, c;
  printf("Enter number one a \n");
  scanf("%d", &a);

  printf("Enter number one b \n");
  scanf("%d", &b);

  printf("Enter number one c \n");
  scanf("%d", &c);

  if (a == b || b == c || c == a) {
    printf("One of the pair of the numbers are equal");
  } else {
    printf("None of these numbers are equal");
  }
}

int main() {

  int choice;

  printf("Menu for Program, enter your choice\n");
  printf("1. Reverse a 5 digit number \n");
  printf("2. Compare two floats \n");
  printf("3. Input a number and multiply it by 2 if is divisible by 2, "
         "otherwise multiply it by 3\n");
  printf("4. Determine if any of two of three numbers are equal \n");

  scanf("%d", &choice);

  switch (choice) {
  case 1:
    five_digit_number_reverse();
    break;
  case 2:
    float_comparision();
    break;
  case 3:
    number_operation_single_number();
    break;
  case 4:
    number_operation_three_equal();
    break;
  default:
    printf("You entered a wrong choice, exiting the program");
  }

  return 0;
}
