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
 * _recursion - Recursive function used for the Quick sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array (number of elements).
 * @min: The value that is furthest to the left.
 * @max: The value that is furthest to the right.
 */

void _recursion(int *array, size_t size, int min, int max)
{
	if (min < max)
	{
		int pivot = partition(array, size, min, max);

		recursion(array, size, min, pivot - 1);
		recursion(array, size, pivot + 1, max);
	}
}

/**
 * _part - Lomuto partition scheme for Quick sort algorithm.
 *
 * @array: Pointer to the array to be partitioned.
 * @size: Size of the array (number of elements).
 * @min: The value that is furthest to the left.
 * @max: The value that is furthest to the right.
 *
 * Return: The value of the pivot element after partitioning.
 */

int _part(int *array, size_t size, int min, int max)
{
	int pivot = array[max];
	int i = min - 1, j;

	for (j = min; j <= max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
				swap(&array[i], &array[j]);
		}
	}

	if (i + 1 != max)
		swap(&array[i + 1], &array[max]);
	return (i + 1);
}

/**
 * _swap - Swaps two integer values.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

void _swap(int *a, int *b)
{
	if (*a != *b)
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
