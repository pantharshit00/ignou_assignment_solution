#include <stdio.h>
#include <stdlib.h>

int gen_random(int N) { return (double)rand() / RAND_MAX * N; }

int main() {
  unsigned max, num, c;
  FILE *file = fopen("ran.dat", "w");

  printf("Enter the maximun value of the random numbers\n");
  scanf("%d", &max);

  for (c = 1; c <= 10; c++) {
    num = gen_random(max);
    fprintf(file, "%d\n", num);
    printf("%d\n", num);
  }

  return 0;
}
