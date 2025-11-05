#include <stdio.h>

int main() {
  int c;
  int arr[26];

  for(int i = 0; i< 26; i++) {
    arr[i] = 0;
  }

  while((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++arr[c-'a'];
    }
    if (c >= 'A' && c <= 'Z') {
      ++arr[c-'A'];
    }
  }
  for(int i = 0; i<26; i++) {
    for(int j = 0; j < arr[i]; j++) {
      printf("|");
    }
    printf("\n");
  }
}

