
/**
 * bubble_sort - Sorts an array of integers in ascending order 
 *
 * @array: the array to be sorted
 * @size: number of elements in array
 */

#include "sort.h"




	void buuble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t index, verify;

	while (array)
	{
		verify = 0;
	for (index = 0; index < size - 1; index++)

		{
	if (array[index] <= array[index + 1])
	verify++;

	else
	{

	temp = array[index];
	array[index] = array[index + 1];
	array[index + 1] = temp;
	print_array(array, size);

	}
}
		if (verify == size - 1)
		return;

	}
}
