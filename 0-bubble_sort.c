#include "sort.h"
#include <stdio.h>

/**
* swap - Swaps two integers
* @xp: Pointer to the first integer
* @yp: Pointer to the second integer
*/
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

/**
* bubble_sort - Sorts an array of integers in ascending order using Bubble sort
* @array: Array to be sorted
* @size: Size of the array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j, k;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);

for (k = 0; k < size; k++)
{
printf("%d ", array[k]);
}
printf("\n");
}
}
}
}
