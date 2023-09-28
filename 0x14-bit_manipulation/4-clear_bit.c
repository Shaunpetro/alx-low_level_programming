#include "main.h"

/**
 * clear_bit - sets the value of given bit to 0
 * @n: ptr to the num to change
 * @index: index of bit to clear
 *
 * Return: 1 if success, else -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
