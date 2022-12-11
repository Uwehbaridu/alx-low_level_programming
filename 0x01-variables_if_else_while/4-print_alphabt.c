#include <stdio.h>
/**
 * main - Write a program that print lower case and new line
 *
 * Return: Alawys return 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}

	putchar('\n');

	return (0);
}
