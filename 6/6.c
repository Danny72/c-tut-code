#include <stdio.h>
#include <time.h>

#define MAX_ARR_SIZE 20

int main(void) {
  
  int arr[3];

  arr[0] = 5;
  arr[1] = 7;
  arr[2] = 11;

  printf("Elements are %d, %d and %d\n",arr[0],arr[1],arr[2]);

  int numbers[] = {50,150,155};
  int i;

  for (i=0;i<3;i++) {
    printf("Element %d is %d\n",i,numbers[i]);
  }

  int LAST = 5;
  printf("Last: %d\n",LAST);

  int arr2[MAX_ARR_SIZE];
  int j;
  srandom(time(NULL));
  
  for (i=0;i<MAX_ARR_SIZE;i++) {
    j = random() % 10;

    if(j!=9) {
      arr2[i]=j;
    } else {
      arr2[i] = -99;
      break;
    }
  }
  
  i = 0;
  while (arr2[i] != -99 && i < MAX_ARR_SIZE) {
    printf("element %2d: %d\n",i,arr2[i]);
    i++;
  }

  i = 0;
  int arr3[MAX_ARR_SIZE];

  for (i=0;i < MAX_ARR_SIZE;i++) {
    printf("index is %d\n",i);
  }
  
  int garbage_arr[] = {100,200,300,400,500};

  for (i=0;i<10;i++) {
    printf("%d is %d\n",i,garbage_arr[i]);
  }
  printf("size of array: %d and size of element: %d\n",sizeof(garbage_arr),sizeof(garbage_arr[0]));
  printf("length is %d\n",sizeof(garbage_arr)/sizeof(garbage_arr[0]));

  double matrix[10][10];
  printf("size of matrix is %u\n",sizeof(matrix));
  
  i = 0;
  j = 0;
  
  for (i=0;i<10;i++) {
    for (j=0;j<10;j++) {
      matrix[i][j] = (i*10)+j;
    }
  }

  printf("matrix[2][2] = %d\n",matrix[2][2]); 
  printf("matrix[6][8] = %d\n",matrix[6][8]); 

}
