#include <stdio.h>

int function1(int *i);
void my_puts(char *p);
int func1(int a);
int func2(int b);
int funX(int x);
int funY(int y);
void show_arg(char *arg, int arg_num);

int main(int argc, char *argv[]) {
  printf("###################################################\n");
  printf("Welcome to Chapter 9 - pointers, arrays + functions\n");
  printf("###################################################\n");

  int i;
  i = 30;
 
  printf("In main | value of i = %d -- address is %p\n", i, &i);
  function1(&i);
  printf("In main | value of i = %d -- address is %p\n", i, &i);

  my_puts("This is the first test statement");
  my_puts("How appropiate, you fight like a cow!");

  printf("func1 address = %p\n", &func1);
  printf("func2 address = %p\n", &func2);

  int x = 4004;
  int y = 4040;

  int (*funXp)();
  int (*funYp)();

  funXp = funX;
  funYp = funY;

  (*funXp)(x);
  (*funYp)(y);

  int *ptr;
  int array[] = {10,20,30,40,50,60,70};
  int size = sizeof(array)/sizeof(int);
  ptr = array;

  printf("array: %p\n", array);
  printf("array: %p\n", &array);
  printf("array: %p\n", &array[0]);
  printf("array: %d\n", *array);
  printf("\n"); 

  while(ptr < &array[size]) {
    printf("*ptr = %d\n", *ptr);
    ptr++;
    printf("&ptr = %p\n", ptr);
  }

  int    int_arr[5];
  double doub_arr[5];

  int    *iptr = int_arr;
  double *dptr = doub_arr;
  
  int count;

  for (count=0;count<5;count++) {
      printf("pointer + %d\t", count);
      printf("%15p  %15p\n", iptr + count, dptr + count);
  }

  for (i=0;i<argc;i++) {
    show_arg(*(argv+i), i+1);
  }

  int nums[2][2] = { {10,20}, {50,60} };
  printf("nums[0][1] is %d\n", nums[0][1]);
  printf("nums[0][1] is %d\n", *(*nums+1));

  char letters[3][3] = { {'a','b','c'},
                         {'d','e','f'},
                         {'g','h','i'} };

  i = 0;
  int j = 2;
  printf("letters[2][2] = %c\n", *(*letters+i*3+j));

  i = 2;
  j = 1;
  printf("letters[2][2] = %c\n", *(*letters+i*3+j));

  char *word = "hello";
  size = sizeof(word);
  printf("%d\n", size);
  
  for (i=0;i<5;i++) {
    printf("%d: %c\n", i+1, *word++);
  }
  return 0;
}

int function1(int *i) {
  printf("In function1 | value of i = %d -- address is %p\n", *i, i);
  (*i)++;
}

void my_puts(char *p) {
  while(*p) {
    printf("[%c]", *p++);
  }
  printf("\n");
}  

int func1(int a) {
  return a + a;
}

int func2(int a) {
  return a * a;
}

int funX(int x) {
  printf("funx var is %d\n", x);
}

int funY(int y) {
  printf("funy var is %d\n", y);
}

void show_arg(char *arg, int arg_num) {
  printf("argument %d: %s\n", arg_num, arg);
}
