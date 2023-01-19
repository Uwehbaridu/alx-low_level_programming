#include <stdio.h>
#include "variadic_function.h"
/**
 * print_numbers: a function that prints numbers, followed by a new line.
 * @*separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Description: If separator is NULL, don’t print it
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	print("\n");
	va_end(vlist);
}
