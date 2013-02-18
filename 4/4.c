#include <stdio.h>

int main(void) {

  char char1 = 'A';
  int num1 = 7;

  if(char1 > num1) {
    printf("%c is greater than %d\n", char1, num1);
    printf("because %d is greater than %d\n", char1, num1);
  }

int val = 3;

switch(val) {
  case 1:
    printf("val is 1\n");
    //break;
  case 2:
    printf("val is 2\n");
    //break;
  case 3:
    printf("val is 3\n");
    //break; 
  default:
    printf("not in range 1-3\n");
    break;
} 
  return 0;
}
