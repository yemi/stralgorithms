#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ASSIGNMENT 3

#define ARRAY_LENGTH 20000
#define RANDOM_RANGE 50000

// -----------------------------------------------------------------

/*
 * a)
 */

int *insertionSort (int *array, int length) {
  for (int i = 1; i < length; i++) {
    for (int y = 0; y < i; y++) {
      if (array[i] < array[y]) {
        int temp = array[y];
        array[y] = array[i];
        array[i] = temp;
      }
    }
  }
  return array;
}

/*
 * b)
 */

int *reverse (int *array, int length) {
  for (int i = 0; i < length / 2; i++) {
    int temp = array[i];
    array[i] = array[length - 1 - i];
    array[length - 1 - i] = temp;
  }
  return array;
}

// -----------------------------------------------------------------

/*
 * Helpers
 */

int *getRandomNumbers (void) {
  static int r[ARRAY_LENGTH];
  int i;
  time_t t;

  // Set the seed 
  srand((unsigned) time(&t));

  for ( i = 0; i < ARRAY_LENGTH; ++i) {
    int n = rand() / (RAND_MAX / RANDOM_RANGE + 1);
    r[i] = n;
  }
  return r;
}

float getTimeDelta (float t1, float t2) {
  return ((float)(t2 - t1) / 1000000.0F ) * 1000;
}

int isAscending (int *array, int length) {
  int isSorted = 1;
  for (int i = 0; i < length - 1; i++) {
    if (array[i] > array[i + 1]) {
      isSorted = 0;
    }
  }
  return isSorted;
}

int isDescending (int *array, int length) {
  int isSorted = 1;
  for (int i = 0; i < length - 1; i++) {
    if (array[i] < array[i + 1]) {
      isSorted = 0;
    }
  }
  return isSorted;
}

/*
 * Run this mother
 */

int main (void) {
  clock_t t1, t2;

  int *unsorted = getRandomNumbers();

  printf("\nArray of %d random numbers between 0 and %d:\n\n", 
    ARRAY_LENGTH, RANDOM_RANGE);
  
  t1 = clock();
  int *sorted = insertionSort(unsorted, ARRAY_LENGTH);
  t2 = clock();

  float diff = getTimeDelta(t1, t2);

  printf("Insertionsort:\n%f miliseconds\n\n", diff);
  printf("Array is sorted: %d\n\n", isAscending(sorted, ARRAY_LENGTH));

  t1 = clock();
  int *reversed = reverse(sorted, ARRAY_LENGTH);
  t2 = clock();

  diff = getTimeDelta(t1, t2);

  printf("Reverse:\n%f miliseconds\n\n", diff);
  printf("Array is reversed: %d\n\n", isDescending(sorted, ARRAY_LENGTH));

  return 0;
}
