#include <stdio.h>
#include "variadic_func.h"

/**
 * sum_them_all: Function that returns the sum of all its parameters.
 * @n: it returns 0 if n== 0
 *Description: This function sums all the arguements
 * Return: no return
 */
int sum_them_all(const unsigned int n, ...);
{

	va_list sums;

	va_start(sums, n);

		if (n == 0)
		{
			int arg = va_arg(sums, int);
			printf("Sume Them All %d:\n", n, sums);
		}
		va_end(sums);
}
