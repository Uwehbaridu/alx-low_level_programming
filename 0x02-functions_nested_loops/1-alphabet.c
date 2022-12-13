#include <stdio.h>

/*
 * main - function to print lower case letters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);

	putchar('\n');

	return;

}

int main(void)
{
	print_alphabet();
	return (0);
}
