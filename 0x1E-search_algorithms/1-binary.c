#include "search_algos.h"

/**
* binary_search - searches using binary seach algo method
* @array: first element
* @size: number of elements
* @value: value
* Return: value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, mid = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (high + low) / 2;
		i = low;
		printf("Searching in array: ");

		for (; i <= high; ++i)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
