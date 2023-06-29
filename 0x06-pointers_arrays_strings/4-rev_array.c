#include "main.h"

/**
 * reverse_array - reverses an array of int
 * @a: arr
 * @n: number of elements of the arr
 * Return: rev
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
}
}
