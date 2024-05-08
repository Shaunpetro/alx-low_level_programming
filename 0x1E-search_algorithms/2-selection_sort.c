#include "sort.h"
/**
* selection_sort - sorts in ascending order
* @array: array of integers
* @size: size of the array
*
* Return: none
*/
void selection_sort(int *array, size_t size)
{
	unsigned int num = 0, lowest = 0, i = 0;
	int aux = 0;

	if (array == NULL)
		return;

	for (num = 0; num < size; num++)
	{
		lowest = num;

		for (i = num + 1; i < size; i++)
		{
			if  (array[lowest] > array[i])
				lowest = i;
		}
		if (lowest != num)
		{
			aux = array[num];
			array[num] = array[lowest];
			array[lowest] = aux;
			print_array(array, size);
		}
	}
}
