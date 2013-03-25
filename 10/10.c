#include <stdio.h>
#include <string.h>

int main(int argc, char *argv) {
  printf("###############################\n");
  printf("Welcome to Chapter 10\n");
  printf("###############################\n");

  int i;

  for (i=33;i<127;i++) {
    //printf("C: %c | Val: %d\n",i,i);
  }

  char string1[] = {'a'};
  char string2[] = "a";
  char string3[] = "a test string";

  i = 0;

  printf("size of string1 = %d\n", sizeof(string1));
  printf("size of string2 = %d\n", sizeof(string2));

  while (string3[i]!='\0') {
    printf("%c", string3[i++]);
  }
  
  printf("\n");
  i = 0;

  while(string3[i]) {
    printf("%c", string3[i++]);
  }

  printf("\n");

  char name[] = "Barney Rubble";

  printf("%c\n", name[0]);
  printf("%c\n", name[1]);
  printf("%c\n", name[2]);
  printf("%s\n", name);
  printf("%d\n", '\0');

  char s1[30];
  char s2[] = "Hitchhiked to hell and back, riding the wind";

  printf("%s\n", s2);
  strcpy(s1, s2);
  printf("%s\n", s1);
  return 1;
}
