#include <stdio.h>
#include <string.h>

int main(void) {
  char string[] = "This is a sentence with 7 tokens";
  char* tokenPtr = strtok(string, " ");
  printf("%s\n", string);
  printf("%s\n", tokenPtr);

  while (tokenPtr != NULL) {
    printf("%s\n", tokenPtr);
    tokenPtr = strtok(NULL, " ");
  }
  printf("%s\n", string);
}
