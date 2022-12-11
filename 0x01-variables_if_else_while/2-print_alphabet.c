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

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
