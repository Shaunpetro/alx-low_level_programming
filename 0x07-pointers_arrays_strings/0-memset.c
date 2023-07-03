#include "main.h"

/**
* _memset - fill a block of memory with a specific value
* @s: starting the address memory to fill
* @b: desired value
* @n: number of bytes to be changes
*
* Return: changed array with new value for n
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
