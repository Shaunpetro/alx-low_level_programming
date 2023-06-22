#include "main.h"

/**
 * _isupper - checks for lowercase charecter
 * @c:The charecter to be checked
 * Return: 1 for uppercase charecter or 0 for anything else
 */

int _isupper(int c)
		{
		if (c >= 65 && c <= 90)
			return (1);
		else
			return (0);
		}
