#include <stdio.h>

int main(void) {
  int c;
  int blank;
  blank = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blank;
    }
    if (c != ' ') {
      blank = 0;
    }
    if(blank < 2) {
      putchar(c);
    }
  }
}
