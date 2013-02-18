#include <stdio.h>

int main(void) {
  float answer = 1/3.0;
  printf("intvar is %f\n",answer);

  double num = 123.001;
  printf("double is %f\n",num); 

  char letter1 = 'a';
  char letter2 = 'x';
  printf("These are some chars: %c and %c\n", letter1, letter2);

  char c = 65;
  printf("ASCII code for %c is %d\n", c, c);

  int int1 = 5;
  int int2 = '5';
  printf("val of int1 is %d\n", int1);
  printf("val of int2 is %d\n", int2);
  printf("ASCII of int2 is %c\n", int2);

  char ch = 'T';
  int i = 9;
  float f = 7.3;
  double outcome = ch*i/f;
  printf("The outcome is %f\n", outcome);
 
  printf("char has size %u\n", sizeof(char));
  printf("int has size %u\n", sizeof(int));
  printf("float has size %u\n", sizeof(float));
  printf("double has size %u\n", sizeof(double));
  printf("long double has size %u\n", sizeof(long double));

  int var = 10;
  printf("lvalue = %p and the rvalue = %d\n", &var, var);
  return 1;
}
