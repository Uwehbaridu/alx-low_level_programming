#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Program to print lowcase alphabet
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char i;

	putchar("\n\nLower case characters:\n");
	for (i = 'a'; i <= 'z'; i++)
		putchar("%c ", i);
	return (0);
}
