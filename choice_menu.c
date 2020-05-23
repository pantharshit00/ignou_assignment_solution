#include <stdio.h>

void add()
{
  int a, b, sum;
  printf("Enter the first value\n");
  scanf("%d", &a);
  printf("Enter the second value\n");
  scanf("%d", &b);

  printf("First number = %d\n", a);
  printf("Second number = %d\n", b);
  sum = a + b;
  printf("Sum of the numbers = %d", sum);
}

void division()
{
  int a, b, division;
  printf("Enter the first value\n");
  scanf("%d", &a);
  printf("Enter the second value\n");
  scanf("%d", &b);

  printf("First number = %d\n", a);
  printf("Second number = %d\n", b);
  division = a / b;
  printf("Division of the numbers = %d", division);
}
void product()
{
  float a, b, product;
  printf("Enter the first value\n");
  scanf("%f", &a);
  printf("Enter the second value\n");
  scanf("%f", &b);

  printf("First float = %f\n", a);
  printf("Second float = %f\n", b);
  product = a * b;
  printf("Product of the floats = %f", product);
}
void print_word()
{
  char word[50];
  printf("Enter a word \n");
  scanf("%s", &word);

  printf("Printing the word twice\n");
  printf("%s%s", word, word);
}

void main()
{
  int choice;
  printf("Menu for Program, enter your choice\n");
  printf("1. Sum of two number \n");
  printf("2. Division of two numbers \n");
  printf("3. Product of two floats \n");
  printf("4. Print a word twice\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    add();
    break;
  case 2:
    division();
    break;
  case 3:
    product();
    break;
  case 4:
    print_word();
    break;
  default:
    printf("You entered a wrong choice, exiting the program");
  }
}