#include <stdio.h>
/**
 * main - print alphabet in reverse order
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc <= 'a'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
