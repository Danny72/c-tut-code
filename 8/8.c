#include <stdio.h>

int main() {
  printf("Welcome to Chapter 8: Pointers!\n");
  
  int i, *j;
  j = &i;

  printf("The val of j is %p\n",j);
  printf("The address of i is %p\n",&i);

  i = 50;
  j = &i;

  printf("Pointer dereferenced is %d\n", *j);
  printf("Pointer mem address is %p\n", j); 
 
  *j = 250;
  printf("i value is now %d\n",i);
  
  *j = 500;
  printf("i value is now %d\n",i);
  printf("j address is now %p\n",&j);

  i = 500;
  printf("i = %d | *j = %d\n", i, *j);
  i = 800;
  printf("i = %d | *j = %d\n", i, *j);
  (*j)++;
  printf("i = %d | *j = %d\n", i, *j);
  ++(*j);
  printf("i = %d | *j = %d\n", i, *j);


  int *p1, *p2, *p3;
  int val = 0;

  p1 = &val;
  p2 = &val;

  while (*p2 < 5) {

    printf("%15d \t %p\n",*(p1++), p1);
    printf("%15d \t %p\n",(*p2)++, p2);
    printf("\n");
  }
  
  double double_arr[] = {10.5, 11.5, 12.8, 13.2, 16.12};
  double *dblp;

  printf("doubles require %d bytes\n", sizeof(double_arr[0]));
  dblp = double_arr; 

  printf("%f\t%p\n", *dblp, dblp);
  dblp++;
  printf("%f\t%p\n", *dblp, dblp);
  printf("%f\t%p\n", *(++dblp), dblp);
  printf("%f\t%p\n", *(dblp + 1), dblp + 1);
  printf("%f\t%p\n", *(dblp + 2), dblp + 2);

  int value, *poi, **mpoi;
  value = 10;
  poi = &value;
  mpoi = &poi;

  printf("value = %d\n", value);
  printf("**mpoi = %d\n", **mpoi);
  printf("*mpoi = %p\n", *mpoi);
  return 1;
}
