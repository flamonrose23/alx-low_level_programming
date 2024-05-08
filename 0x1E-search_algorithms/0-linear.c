#include "search_algos.h"

/**
 * linear_search - searching value in array of
 * integers using the Linear search algorithm
 *
 * @array: input
 * @size: size of array
 * @value: pointing to value to search
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < (int)size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
