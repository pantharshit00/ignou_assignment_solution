#include <stdio.h>
#include <math.h>

void main()
{
  int n;
  printf("Enter the binary number\n");
  scanf("%d", &n);

  int d = 0, q, x = n;
  for (int i = 0; x != 0; i++)
  {
    q = x % 10;
    d = q * pow(2, i) + d;
    x /= 10;
  }

  printf("%d in decimal = %d", n, d);
}