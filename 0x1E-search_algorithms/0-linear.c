#include "search_algos.h"

/**
 * linear_search - searches for a value in an arr
 * @array: pointer to the 1st element
 * @size: num of elements in arr
 * @value: value to search
 *
 * Return: 1st index located value
 *          or -1 if value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
