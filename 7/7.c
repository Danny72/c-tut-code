#include <stdio.h>

int fac(int n);
void display_arr(int arr[], int SIZE);
void sort(int a[], int limit);

int print(char c, int limit) {
  int i;
  for (i=0;i<limit;i++) {
    printf("%c\n",c); 
  }
}
 
int leap_year_test(int year) {
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main(void) {
  int i = 7;
  char c1 = 's';
  char c2 = '@';

  print(c1,i);

  i = 10;

  print(c2,i);

  printf("a = %-10d\n",1138); 
  
  int years[] = {1995, 2000, 2005, 2010, 2015, 2020};

  for (i=0;i<(sizeof(years)/sizeof(years[0]));i++) {
    if (leap_year_test(years[i])) {
      printf("%d is a leap year\n",years[i]);
    } else {
        printf("%d is NOT a leap year\n",years[i]); 
    }
  }

  printf("result is %d\n", fac(5));

  int arr[] = {57,67,77};
  int SIZE = sizeof(arr)/sizeof(int);
  printf("size of arr is %d\n",sizeof(arr)/sizeof(int));
  display_arr(arr,SIZE);

  for (i=0;i<SIZE;i++) {
    printf("%d: %d\n",i,arr[i]);
  }

  int arrx[] = {80, 34, 38, 99, 1, 64};
  int size = sizeof(arrx)/sizeof(arrx[0]);
  for (i=0;i<size;i++) {
    printf("%d | %d\n",i+1,arrx[i]);
  }
  sort(arrx,size);
  for (i=0;i<size;i++) {
    printf("%d | %d\n",i+1,arrx[i]);
  }
  return 0;
}

int fac(int n) {
  if (n==0) {
    return 1;
  } else {
    return n * fac(n-1);
  }
}
 
void display_arr(int arr[], int SIZE) {
  int i;
  printf("size of arr is %d\n",sizeof(arr)/sizeof(int));
  for (i=0;i<SIZE;i++) {
    printf("%d: %d\n",i,arr[i]++);
  }
}

void sort(int a[], int limit) {
  
  int i,j, temp;
  i=1;
  j=0;
  
  while (j<limit) {
    i=j+1;
    while (i<limit) {
      if (a[j] > a[i]) {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
      i++;
    }
    j++;
  }
}
