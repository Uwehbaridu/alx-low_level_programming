#include <stdio.h>
#include "main.h"

/*
 * main - function to print lower case letters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');

	return;

}
