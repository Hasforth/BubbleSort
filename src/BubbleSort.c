#include "BubbleSort.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>

bool letters_in_order(char x, char y){
  x = tolower(x);
  y = tolower(y);
  
  if(y >= x){
    return 1;
  }
  return 0;
}

bool numbers_in_ascending(char x, char y){
  if(y >= x){
    return 1;
  }
  return 0;
}

void swap(char *x, char *y){
  char swap = *x;
  *x = *y;
  *y = swap;
}

void bubble_sort(char *arr, bool (*pair_is_in_order)(char, char)){
  int swap_state = 1;

  while(swap_state == 1){
    swap_state == 0;
    for (size_t i = 0; i + 1; ++i) {
      if (pair_is_in_order(arr[i], arr[i + 1]) == false){
        swap_state == 1;
      }
    }
  }
}