#include "search_algos.h"

/**
  * binary_search - searching for value in sorted array
  *                 of integers using binary search.
  * @array: pointing to first elmnt of array
  * @size: means number of elmnts in array
  * @value: pointing to value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  *
  * Description: Printing the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t x, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}
