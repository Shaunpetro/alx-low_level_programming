#include <stdio.h>

/**
 * _putchar - writes rge charecter c to stdout
 * @c: The charecter to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and error no is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
