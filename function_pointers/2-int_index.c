#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers that meets a
 *             comparison criteria.
 *
 * @array: The array of integers to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare elements. This function
 *       should take an integer and return 0 if the element matches the
 *       criteria, and a non-zero value otherwise.
 *
 * Return: If no element matches the criteria or the array or comparison
 *         function is NULL, return -1. Otherwise, return the index of the
 *         first element that meets the criteria.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  // Check for invalid input (NULL array or comparison function)
  if (array == NULL || cmp == NULL) {
    return -1;
  }

  // Iterate through the array
  for (int index = 0; index < size; index++) {
    // Call the comparison function on the current element
    if (cmp(array[index]) != 0) {
      // Element matches the criteria, return the index
      return index;
    }
  }

  // No element matched the criteria
  return -1;
}
