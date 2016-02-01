#include<stdio.h>

int factorial (int num) {
  int result = 1;
  for (int x = 1; x <= num; x++) {
    result = result * x;
  }
  return result;
}

// sizof
// med pekarnodation utan [] i arrayen eller annat sött
//
// Förklaring till varför man måste skicka in storleken av arrayen till funktionen man ska använda den i
//http://stackoverflow.com/questions/8269048/length-of-array-in-function-argument#8269159

int sum (int *numbers, int length) {
  int result;
  for (int i = 0; i < length; i++) {
    result = result + numbers[i];
  }
  return result;
}

// sizof
// med pekarnodation utan [] i arrayen eller annat sött
int max (int *numbers, int length) {
  int result = 0;
  for (int i = 0; i < length; i++) {
    if (numbers[i] > result) {
      result = numbers[i];
    }
  }
  return result;
}

int main (void) {
  int sumArr[] = {1, 2, 3};
  int maxArr[] = {4, 12, 34, 21};
  printf("factorial(5): %d\n", factorial(5));
  printf("sum([1, 2, 3], 3): %d\n", sum(sumArr, 3));
  printf("max([4, 12, 34, 21], 4): %d", max(maxArr, 3));
  printf("\n");
  return 0;
}
