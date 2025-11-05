#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF) {
    if (c == '\t') {
      c = '\b';
    }

    if (c == '\\') {
      putchar('\\');
    }
    putchar(c);
  }
}
