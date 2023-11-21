#include "sort.h"

/**
* selection_sort - Sorts an array of integers
* using the Selection sort algorithm.
* @array: The array to be sorted.
* @size: The size of the array.
*/
void selection_sort(int *array, size_t size)
{
size_t outer_index, inner_index;
int current_min, temp, min_index;

for (outer_index = 0; outer_index < size; outer_index++)
{
current_min = array[outer_index];
for (inner_index = outer_index + 1; inner_index < size; inner_index++)
{
if (current_min > array[inner_index])
{
current_min = array[inner_index];
min_index = inner_index;
}
}
if (current_min != array[outer_index])
{
temp = array[outer_index];
array[outer_index] = current_min;
array[min_index] = temp;
print_array(array, size);
}
}
}
