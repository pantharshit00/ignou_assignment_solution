#include <stdio.h>

#define MAX_FILENAME_LENGTH 100

int main() {
  FILE *fp;
  int count = 0;
  int value;
  int total = 0;
  float avg = 0;
  char filename[MAX_FILENAME_LENGTH];
  char c;

  fp = fopen("ran.dat", "r");
  if (fp == NULL) {
    printf("Cannot open ran.dat file, make sure it exists");
    return 0;
  }
  while (EOF != fscanf(fp, "%d", &value)) {
    printf("%d\n", value);
    total += value;
    ++count;
  }
  avg = total / count;
  count = 0;
  fclose(fp);
  fp = fopen("ran.dat", "r");
  while (EOF != fscanf(fp, "%d", &value)) {
    if (value > avg) {
      count++;
    }
  }
  fclose(fp);

  printf("Average is %f\n", avg);
  printf("Number of data that is above avg %d", count);

  return 0;
}
