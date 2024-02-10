#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: input array.
 * @value: value to search for.
 * @size: size of the given array.
 * Return: value if exists in array otherwise -1.
*/
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), i = 0;
	int len = (int)size;

	if (array == NULL || size == 0)
		return (-1);

	while (array[i] < value && i < len)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i + jump;
	}
	i = i - jump;
	printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
	for (; i < len; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
