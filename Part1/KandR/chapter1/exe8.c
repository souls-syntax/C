#include <stdio.h>

#define EXPRESSION '\t'

int main() {
  int c;
  int nc;
  nc = 0;
  while((c=getchar()) != EOF){
    if(EXPRESSION == c) {
      ++nc;
    }
  }

  printf("\n\n%d\n", nc);
}
