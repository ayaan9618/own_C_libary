#include <stdio.h>
#include <stdlib.h>
#include <arlib.h>
 
int main(void) {
  printf("Hello, World!\n");

  int arr[5];
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  
   
}