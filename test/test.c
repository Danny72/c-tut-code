#include <stdio.h>

int main(void) {

  int boing = 5;
  printf("here is boing = %d\n", boing);

  void foo() {
    printf("here is boing in foo = %d\n", boing);
  }

  return 1;
}
