#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
    }
    putchar(c);
  }
}
