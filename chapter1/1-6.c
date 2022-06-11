#include <stdio.h>

int main() {
  int c;
  int t;
  while((t = (c = getchar()) != EOF)) {
    putchar(c);
    printf("EOF: %d\n", t);
  }
  printf("EOF: %d\n", t);
}
