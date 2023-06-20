#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;
		for (letter = 'a'; letter <= 'z' + 1; letter++)
			_putchar(letter);
		_putchar('\n');
}
