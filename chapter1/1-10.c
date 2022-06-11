#include <stdio.h>

char replace_escapes(char c, char escape, char replace) {
  if (c == escape) {
      putchar('\\');
      return replace;
  }

  return c;
}

int main() {
  int c;

  while((c = getchar()) != EOF) {
    c = replace_escapes(c, '\t', 't');
    c = replace_escapes(c, '\b', 'b');
    c = replace_escapes(c, '\\', '\\');

    putchar(c);
  }
}
