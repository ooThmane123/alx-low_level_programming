#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: input array.
 * @size: size of the array.
 * @value: value to search for
 * Return: value if exists in array otherwise -1.
*/

int binary_search(int *array, size_t size, int value)
{
	int first = 0, last = size - 1, mid;
	int i = size;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i < last)
				printf(", ");
		}
		printf("\n");

		mid = first + (last - first) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}

	return (-1);
}
