#include "search_algos.h"

/**
* linear_search - searches for a value in an array using linear search algo
* @array: pointer to first element in array
* @size: size of the array
* @value: value being searched for
* Return: first index where value is found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
