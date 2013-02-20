#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("the dokey file is working");
  char count = 'A';

  while (count <= 'Z') {
    printf("%c\n",count++);
  }
  count = 'a';
  while (count <= 'z') {
    printf("%c\n",count++);
  }

  int num = 100;
  int dec = 2;

  while (dec < num) {
    if (num%dec == 0) {
      printf("%d is divisible by %d\n",num,dec);
    }
    dec++;
  }

  int c;
  int limit = 10;

  for (c=1;c <= limit; c++) {
    printf("pass no %d\n",c);
  }
 
  int len = 10;
  int i, j;

  for (i=0;i<len;i++) {
    for (j=len;j>i;j--) {
      printf("*");
    } 
    printf("\n");
  }

  int icount = 0;
  /* a for loop without parameters is a infinite loop*/
  for(;;) {
    i = (rand()*(unsigned)time(NULL)) % 100;
    j = (rand()*(unsigned)time(NULL)) % 100;
    printf("i = %d and j = %d\n",i,j);
    if (i==j) {
    printf("**MATCH** on loop number %d\n",icount);
    break;
    }
    icount++;
  }
  //test
  i = 0; 
  while(++i) { 
    if (i%3==0) {
      continue;
    }
    if (i > 100) {
      break;
    }
    printf("%d loop\n",i);
  } 

  return 0;

}
