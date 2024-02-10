#include "search_algos.h"
/**
 * interpolation_search -  searches for a value in a sorted array of
 * integers using the Interpolation search algorithm.
 * @array: given input array.
 * @size: size of the given array.
 * @value: value to search for.
 * Return: value if exists in array otherwise -1.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	size_t i = 0;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
	* (value - array[low]));

	if (!array || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
