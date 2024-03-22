#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int)) {
  if (array == 0 || cmp == &non_compare) {
    return -1;
  }

  for (int index = 0; index < size; index++) {
    if (cmp(array[index]) != 0) {
      return index;
    }
  }

  return -1;
}

int non_compare(int value) {
  return 1;
}
