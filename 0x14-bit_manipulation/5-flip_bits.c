#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 *      to get on one num to anotehr num
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
