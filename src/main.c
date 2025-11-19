#include "BubbleSort.h"
#include <stdio.h>
#include <stdlib.h>

const int SIZE = 4;
char letter_arr1[] = {'z', 'S', 's', 'a'};
// aSsz
char number_arr1[] = {4, -1, 2, 9};
// -1, 2, 4, 9

void print_letter(char sortedLetter[], size_t len){
    for (size_t i = 0; i < len; i++){
        printf ("%c \n", *(sortedLetter + i));
    }
}

void print_number(char sortenNumber[], size_t len){
    for (size_t i = 0; i < len; i++){
        printf ("%c \n", *(sortenNumber + i));
    }
}

int main() {
  bubble_sort(number_arr1, numbers_in_ascending);
  bubble_sort(letter_arr1, letters_in_order);

  print_letter(letter_arr1, SIZE);
  print_number(number_arr1, SIZE);
  }