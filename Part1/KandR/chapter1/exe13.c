#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
  int c, state, count;
  count = 0;
  state = 0;
  while((c = getchar()) != EOF) {
    if(c>= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
      printf("|");
    }
    else {
      printf("\n");
    }
  }
} 
