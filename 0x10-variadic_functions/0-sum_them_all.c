#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: number of param to be passed
 *Description - This function sums all the arguements
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list num;

	if (n == 0)
		return (0);


	va_star(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
