#include <ctype.h>
#include <stdio.h>

int main() {
  char word[100];
  int vowel = 0;

  printf("Please enter a word\n");
  scanf("%s", word);

  int n;
  for (n = 0; word[n] != '\0'; n++) {
    char current = toupper(word[n]);
    if (current == 'A' || current == 'E' || current == 'I' || current == 'O' ||
        current == 'U') {
      vowel++;
    }
  }

  printf("The string you entered is %s\n", word);
  printf("The number of vowels in that string is %d", vowel);

  return 0;
}
