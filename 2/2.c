#include <stdio.h>

int main(void) {
  int n = 65535;
  unsigned un = n;

  printf("signed %d\n", n);
  printf("unsigned %u\n", un);
  
  un = n + n;
  n = n + un; 
 
  printf("signed %d\n", n);
  printf("unsigned %u\n", un);
  return 0;
}
