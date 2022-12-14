#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	char vb;

	int j

		j = 0;
	:

	while (j < 10)
	{
		vb = 'a';

		while (vb <= 'z')
		{
			_putchar(vb);
			vb++;
		}
		_putchar('\n');
		j++;
	}
}

