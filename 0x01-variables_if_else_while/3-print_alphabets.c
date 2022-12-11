#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lower and upper case
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n';
	return (0);
}
