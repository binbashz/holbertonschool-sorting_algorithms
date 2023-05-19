#include"sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array (number of elements).
 */

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	recursion(array, size, 0, size - 1);
}

/**
 * recursion - Recursive function used for the Quick sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array (number of elements).
 * @min: The value that is furthest to the left.
 * @max: The value that is furthest to the right.
 */

void recursion(int *array, size_t size, int min, int max)
{
	if (min < max)
	{
		int pivot = part(array, size, min, max);

		recursion(array, size, min, pivot - 1);
		recursion(array, size, pivot + 1, max);
	}
}

/**
 * part - Lomuto partition scheme for Quick sort algorithm.
 *
 * @array: Pointer to the array to be partitioned.
 * @size: Size of the array (number of elements).
 * @min: The value that is furthest to the left.
 * @max: The value that is furthest to the right.
 *
 * Return: The value of the pivot element after partitioning.
 */

int part(int *array, size_t size, int min, int max)
{
	int pivot = array[max];
	int i = min - 1, j;

	for (j = min; j <= max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, size, i, j);
		}
	}

	swap(array, size, i + 1, max);

	return (i + 1);
}

/**
 * swap - Swap two integer values.
 *
 * @array: Pointer to the array.
 * @size: Size of the array (number of elements).
 * @min: Index of the first element to swap.
 * @max: Index of the second element to swap.
 */

void swap(int *array, size_t size, int min, int max)
{
	int tmp;

	if (array[min] != array[max])
	{
		tmp = array[min];
		array[min] = array[max];
		array[max] = tmp;

		print_array(array, size);
	}
}
