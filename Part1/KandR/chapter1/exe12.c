#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
  int c, state;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      c = ;
    }     
    else if(state == OUT){
      state = IN;
      putchar('\n');
          
    }     
    putchar(c);
  }
}
