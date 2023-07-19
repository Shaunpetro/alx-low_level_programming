#include <unistd.h>

/**
 * _PUTCHAR - WRITES THE CHARECTER C TO STDOUT
 * 2c: the charecter to print
 *
 * Return: on success 1
 * on error, -1 is returned, error is set approprecately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
